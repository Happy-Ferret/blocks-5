#ifndef _CONVEYORBELT_H
#define _CONVEYORBELT_H

#include "object.h"

/*** Klasse f�r Flie�b�nder ***/

class SoundInstance;

class ConveyorBelt : public Object
{
public:
	ConveyorBelt(Level& level, const Vec2i& position, int dir);
	~ConveyorBelt();

	void onRemove();
	void onRender(int layer, const Vec4d& color);
	void onUpdate();
	void onElectricitySwitch(bool on);
	bool changeInEditor(int mod);
	void saveAttributes(TiXmlElement* p_target);

	int getDir() const;

private:
	int dir;
	int anim;
	Object* p_objOnMe;
	int counter;

	static uint numInstances;
	static SoundInstance* p_soundInst;
	static bool soundChanged;
};

#endif
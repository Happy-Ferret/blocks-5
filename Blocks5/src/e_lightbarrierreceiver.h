#ifndef _E_LIGHTBARRIERRECEIVER_H
#define _E_LIGHTBARRIERRECEIVER_H

#include "electronics.h"

/*** Klasse f�r den Empf�nger einer Lichtschranke ***/

class E_LightBarrierReceiver : public Electronics
{
public:
	E_LightBarrierReceiver(Level& level, const Vec2i& position, int dir);
	~E_LightBarrierReceiver();

	void onRender(int layer, const Vec4d& color);
	void frameBegin();
	void saveExtendedAttributes(TiXmlElement* p_target);
	void loadExtendedAttributes(TiXmlElement* p_element);
	bool changeInEditor(int mod);
	void doLogic();
	bool reflectLaser(Vec2i& dir, bool lightBarrier);

protected:
	int value;
};

#endif
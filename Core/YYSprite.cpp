#include "YYSprite.h"

YYSprite::YYSprite()
{
	YYRender* render = YYRender::shareRender();
	render->addDisplayObject(this);
}

void YYSprite::setAnchor(YYPoint anchor)
{
	if (!equalYYPoint(_anchor, anchor))
		return;
	_anchor = anchor;
	_invaildData = true;
}

void YYSprite::setPosition(YYPoint pos)
{
	if (!equalYYPoint(_pos, pos))
		return;
	_pos = pos;
	_invaildData = true;
}
void YYSprite::setScale(YYPoint scale)
{
	if (!equalYYPoint(_scale, scale))
		return;
	_scale = scale;
	_invaildData = true;
}
void YYSprite::setRoated(YYPoint roated)
{
	if (!equalYYPoint(_roated, roated))
		return;
	_roated = roated;
	_invaildData = true;
}
void YYSprite::setSize(YYSize size)
{
	if (!equalYYSize(_size, size))
		return;
	_size = size;
	_invaildData = true;
}

YYPoint YYSprite::getAnchor()
{
	return _anchor;
}
YYPoint YYSprite::getPosition()
{
	return _pos;
}
YYPoint YYSprite::getScale()
{
	return _scale;
}
YYPoint YYSprite::getRoated()
{
	return _roated;
}
YYSize YYSprite::getSize()
{
	return _size;
}
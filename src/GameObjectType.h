#pragma once
#ifndef __GAME_OBJECT_TYPE__
#define __GAME_OBJECT_TYPE__
enum GameObjectType {
	NONE = -1,
	SHIP,
	TARGET,
	PLANET,
	MINE,
	TILE,
	CAT,
	PLAYER,
	PLANE,
	EXPLOSION,
	OBSTACLE,
	START_BUTTON,
	RESTART_BUTTON,
	NUM_OF_TYPES
};
#endif /* defined (__GAME_OBJECT_TYPE__) */
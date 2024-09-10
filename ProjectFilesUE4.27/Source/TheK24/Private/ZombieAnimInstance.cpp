#include "ZombieAnimInstance.h"

UZombieAnimInstance::UZombieAnimInstance()
{
	this->_isChasing = false;
	this->_chaseLocomotionPlayRate = 1.000000;
	this->_chaseSequenceMaxSpeed = 175.000000;
	this->_chaseLocomotionIndex = 0;
	this->_chaseLocomotionMaxIndex = 2;
	this->_isUsingFirstChaseLocomotionPlayer = true;
	this->_isAttacking = false;
	this->_attackIndex = 0;
	this->_maxAttackIndex = 2;
	this->_isPatrollingOrSearching = false;
	this->_isStunned = false;
	this->_isDying = false;
	this->_isSpawning = false;
	this->_isInPool = false;
	this->_zombieCharacter = NULL;
	this->_speed = 0.000000;
	this->_isMoving = false;
	this->_isFalling = false;
	this->_isMale = true;
	this->_currentDirection = 0.000000;
	this->_rotationInterpolationSpeed = 1.000000;
	this->_rotationInterpolationSpeedDuringChase = 3.000000;
}

#pragma once

#define countof(array) (sizeof(array) / sizeof(array[0]))

// round to nearest integer
static inline int intRound(const double d)
{
	return (d + 0.5);
}

// execute _thingsToDo_ while _mutex_ is locked
#define DOLOCKED(mutex, thingsToDo) \
	mutex.lock(); \
	thingsToDo \
	mutex.unlock();

/*
 * Timers.h
 *
 *  Created on: Oct 28, 2016
 *      Author: jcabral
 */

#ifndef TIMERS_H_
#define TIMERS_H_


enum class TimerCounter{
	Up,
	Down,
	CenterAligned
};

class BasicTimer{

};

class GenericTimer : public BasicTimer{

};

class AdvancedTimer: public GenericTimer{

};

class Timer_Advanced : public AdvancedTimer {};
class Timer_General_purpose : public GenericTimer {};
class Timer_Basic : public BasicTimer {};
class Timer_1channel : public GenericTimer {};
class Timer_2channel : public GenericTimer {};
class Timer_1channel_complementary_output : public GenericTimer {};
class Timer_2channel_complementary_output : public GenericTimer {};
class Timer_Low_power : public GenericTimer {};
class Timer_High_resolution : public GenericTimer {};
class NotAvailable{};


class TIM1 	: public Timer_Advanced {};
class TIM2 	: public Timer_General_purpose {};
class TIM3 	: public Timer_General_purpose {};
class TIM4 	: public NotAvailable {};
class TIM5 	: public NotAvailable {};
class TIM6 	: public Timer_Basic {};
class TIM7 	: public Timer_Basic {};
class TIM8 	: public NotAvailable {};
class TIM9 	: public NotAvailable {};
class TIM10 : public NotAvailable {};
class TIM11 : public NotAvailable {};
class TIM12 : public NotAvailable {};
class TIM13 : public NotAvailable {};
class TIM14 : public Timer_1channel {};
class TIM15 : public Timer_2channel_complementary_output {};
class TIM16 : public Timer_1channel_complementary_output {};
class TIM17 : public Timer_1channel_complementary_output {};
class TIM18 : public NotAvailable {};
class TIM19 : public NotAvailable {};
class TIM20 : public NotAvailable {};


#endif /* TIMERS_H_ */

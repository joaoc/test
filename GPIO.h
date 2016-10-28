/*
 * GPIO.h
 *
 *  Created on: Sep 1, 2016
 *      Author: jcabral
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <cstdint>

enum E_PORT_N {
	P1,
	P2,
	P3,
	P4,
	P5,
	P6,
	P7
};

enum BIT {
	BIT0,
	BIT1,
	BIT2,
	BIT3,
	BIT4,
	BIT5,
	BIT6,
	BIT7
};

class GPIO_base_interrupt{
public:

private:
	static volatile uint8_t* const input;
	static uint8_t* const output;
	static uint8_t* const direction;
	static volatile uint8_t* const interrupt_flag;
	static uint8_t* const interrupt_edge_select;
	static uint8_t* const interrupt_enable;
	static uint8_t* const port_select;
	static uint8_t* const port_select2;
	static uint8_t* const Resistor_enable;
};

class GPIO_base{
public:

private:
	static volatile uint8_t* const input;
	static uint8_t* const output;
	static uint8_t* const direction;
	static uint8_t* const port_select;
	static uint8_t* const port_select2;
	static uint8_t* const Resistor_enable;
};
template <E_PORT_N PORT>
class GPIO: private GPIO_base{
public:
	static GPIO& get(){
		static GPIO<PORT> S;
		return S;
	}

private:
	GPIO(){}
	~GPIO(){}
//	GPIO(&GPIO)=0;
};

template <>
class GPIO<P1>: private GPIO_base_interrupt{
public:
	static GPIO& get(){
		static GPIO<P1> S;
		return S;
	}

private:
	GPIO(){}
	~GPIO(){}
//	GPIO(&GPIO)=0;
};

template <>
class GPIO<P2>: private GPIO_base_interrupt{
public:
	static GPIO& get(){
		static GPIO<P2> S;
		return S;
	}

private:
	GPIO(){}
	~GPIO(){}
//	GPIO(&GPIO)=0;
};

#endif /* GPIO_H_ */

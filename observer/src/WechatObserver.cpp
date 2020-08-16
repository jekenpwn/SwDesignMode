/*
 * WetchatObserver.cpp
 *
 *  Created on: Jun 18, 2020
 *      Author: jeken
 */


#include <iostream>
#include <typeinfo>
#include "../inc/SubObs.hpp"
WechatObserver::WechatObserver(){

}

void WechatObserver::setName(std::string name){
	this->name = name;
}

std::string  WechatObserver::getName(){
	return this->name;
}

/* When a subject notified their observers,  the observer will do something here */
void WechatObserver::update(void* obj){

	if(obj  !=  NULL){
		PublicSubject* sub = (PublicSubject*)obj;
		std::cout << sub->getCurMsg() << ", Here is " << this->name << std::endl;
	}
}




/*
 * Observer.hpp
 *
 *  Created on: Jun 16, 2020
 *      Author: jeken
 */

#include <iostream>
#include <string>
#include "../inc/SubObs.hpp"

PublicSubject::PublicSubject(){

}

/**
 * Add a observer
 */
void PublicSubject::addObserver(WechatObserver* observer){
	PublicSubject::observers.push_back(observer);
	std::cout << "Add observer: " << observer->getName() << std::endl;
}

/**
 *  Delete a observer
 */
void PublicSubject::deleteObserver(WechatObserver* observer){
	std::vector<WechatObserver*>::iterator itor;
	for(itor = this->observers.begin(); itor != this->observers.end(); itor++){
		if(*itor == observer){
			std::cout << "Delete observer: " << observer->getName() << std::endl;
			this->observers.erase(itor);
			return ;
		}
	}
}

/**
 *  Notify all observers we have updated something
 */
void PublicSubject::notifyObservers(){

	for(WechatObserver* it : PublicSubject::observers){
		it->update(it);
	}
}

/**
 * Get the message by observer
 */
std::string PublicSubject::getCurMsg(){
	std::string str = "hello";

	return str;
}


/*
 * PublicSubject.hpp
 *
 *  Created on: Jun 16, 2020
 *      Author: jeken
 */

#ifndef __SUBOBS_HPP_
#define __SUBOBS_HPP_

#include <string>
#include <vector>
class WechatObserver {
private :
	std::string name;
public:
	WechatObserver();

	void setName(std::string name);
	std::string getName();
	void update(void* obj );
};

class PublicSubject {

public:
	PublicSubject();

	std::vector<WechatObserver *> observers;

	void addObserver(WechatObserver *observer);
	void deleteObserver(WechatObserver *observer);
	void notifyObservers();
	std::string getCurMsg();
};






#endif /* __SUBOBS_HPP_ */

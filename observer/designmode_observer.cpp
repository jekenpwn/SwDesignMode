#include "inc/SubObs.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	PublicSubject* zeroonemonk = new PublicSubject();

	/* New the wechat observers */
	cout << "-------------New the object-----------" << endl;
	WechatObserver* jeken = new WechatObserver();
	WechatObserver* anima = new WechatObserver();
	WechatObserver* xiao = new WechatObserver();

	/* Set the name  */
	jeken->setName("jeken");
	anima->setName("anima");
	xiao->setName("xiao");

	cout << "-------------Add Observer list----------" << endl;
	/* Subject add observers */
	zeroonemonk->addObserver(jeken);
	zeroonemonk->addObserver(anima);
	zeroonemonk->addObserver(xiao);

	cout << "--------------Notify Observers----------"<<endl;
	/* Public a msg*/
	zeroonemonk->notifyObservers();
	cout << "-------------Delete Observers----------" <<endl;
	/* Delete Observer  */
	zeroonemonk->deleteObserver(jeken);
	zeroonemonk->deleteObserver(anima);
	zeroonemonk->deleteObserver(xiao);

	cout << "------------Notify Observers again-------" << endl;
	zeroonemonk->notifyObservers();

   cout << "------------Release the memory---------" << endl;
	/* Release memory */
   delete jeken;
   delete anima;
   delete xiao;
   delete zeroonemonk;

    return 0;
}

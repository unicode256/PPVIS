#include "Injector.h"
#include "CustomerController.h"
#include "LoginController.h"
#include "RegistrationController.h"
#include "LibraryController.h"
#include "LCollectionController.h"
#include "BookController.h"
#include "BuyBookController.h"
#include "Book.h"
#include "LCollection.h"
#include "LCollectionDAOImpl.h"
#include "LCollectionServiceImpl.h"
#include "CustomerDAOImpl.h"
#include "CustomerServiceImpl.h"
#include "Customer.h"
#include "CustomerFriendsServiceImpl.h"
#include "CustomerDAOImpl.h"
#include "RegistrationController.h"
#include "LibraryDAOImpl.h"
#include "Library.h"
#include "BuyBookInLitres.h"
#include "BookDAOImpl.h"
#include "BookServiceImpl.h"
#include "EntryDialog.h"
#include "MainDialog.h"

void Injector::createControllers() {
	CustomerController CustomerController_;
	LoginController LoginController_;
	RegistrationController RegistrationController_;
	LibraryController LibraryController_;
	LCollectionController LCollectionController_;
	BookController BookController_;
	BuyBookController BuyBookController_;
	Book Book_;
	LCollection LCollection_;
	LCollectionDAOImpl LCollectionDAOImpl_;
	LCollectionServiceImpl LCollectionServiceImpl_;
	CustomerDAOImpl CustomerDAOImpl_;
	CustomerServiceImpl CustomerServiceImpl_;
	Customer Customer_;
	CustomerFriendsServiceImpl CustomerFriendsServiceImpl_;
	CustomerDAOImpl CustomerDAOImpl_;
	Library Library_;
	BuyBookInLitres BuyBookInLitres_;
	BookDAOImpl BookDAOImpl_;
	BookServiceImpl BookServiceImpl_;

	std::string init = CustomerController_.Initialize();
	EntryDialog dlg;
	dlg.DoModal();
	std::string log = LoginController_.loginCustomer(dlg.getLogin(), dlg.getPass());
	std::string check = CustomerController_.checkAuthethication();
	MainDialog main_dlg;
	main_dlg.DoModal();
}

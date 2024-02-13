#include "regloginpassForm.h"
#include "infomasterForm.h"
#include "regmasterForm.h"

using namespace programdp;

System::Void regloginpassForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	infomasterForm^ infomasterform = gcnew infomasterForm;
	infomasterform->Show();
	this->Close();
}

System::Void regloginpassForm::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	regmasterForm^ regmasterform = gcnew regmasterForm;
	regmasterform->Show();
	this->Close();
}





#include "regmasterForm.h"
#include "infomasterForm.h"
#include "regloginpassForm.h"

using namespace programdp;

System::Void regmasterForm::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	infomasterForm^ infomasterform = gcnew infomasterForm;
	infomasterform->Show();
	this->Close();
}

System::Void regmasterForm::btregistration_Click(System::Object^ sender, System::EventArgs^ e) {
	regloginpassForm^ regloginpassform = gcnew regloginpassForm;
	regloginpassform->Show();
	this->Hide();
}


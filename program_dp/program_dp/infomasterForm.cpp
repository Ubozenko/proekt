#include "infomasterForm.h"
#include "regmasterForm.h"

using namespace programdp;

System::Void infomasterForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	regmasterForm^ regmasterform = gcnew regmasterForm;
	regmasterform->Show();
	this->Hide();
}
#pragma once
#include "MainForm2.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm1
	/// </summary>
	public ref class MainForm1 : public System::Windows::Forms::Form
	{
	public:
		MainForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ text1;

	private: System::Windows::Forms::TextBox^ text2;
	private: System::Windows::Forms::TextBox^ text3;
	private: System::Windows::Forms::TextBox^ text4;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->text3 = (gcnew System::Windows::Forms::TextBox());
			this->text4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(65, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm1::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(212, 68);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(109, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Все хорошо";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(327, 68);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 20);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Средне";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(413, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(118, 20);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Плохой день";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// text1
			// 
			this->text1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->text1->Location = System::Drawing::Point(212, 141);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(158, 20);
			this->text1->TabIndex = 6;
			// 
			// text2
			// 
			this->text2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->text2->Location = System::Drawing::Point(212, 210);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(158, 20);
			this->text2->TabIndex = 7;
			// 
			// text3
			// 
			this->text3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->text3->Location = System::Drawing::Point(212, 286);
			this->text3->Name = L"text3";
			this->text3->Size = System::Drawing::Size(158, 20);
			this->text3->TabIndex = 8;
			// 
			// text4
			// 
			this->text4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->text4->Location = System::Drawing::Point(212, 359);
			this->text4->Name = L"text4";
			this->text4->Size = System::Drawing::Size(158, 20);
			this->text4->TabIndex = 9;
			// 
			// MainForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aquamarine;
			this->ClientSize = System::Drawing::Size(889, 527);
			this->Controls->Add(this->text4);
			this->Controls->Add(this->text3);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm1";
			this->Text = L"Тест 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->radioButton1->Checked || this->radioButton2->Checked || this->radioButton3->Checked) && !this->text1->Text->IsNullOrWhiteSpace(this->text1->Text) && !this->text2->Text->IsNullOrWhiteSpace(this->text2->Text) && !this->text3->Text->IsNullOrWhiteSpace(this->text3->Text) && !this->text4->Text->IsNullOrWhiteSpace(this->text4->Text)) {
			MainForm2^ frm = gcnew MainForm2();
			frm->Show();
			this->Close(); // Закрытие текущей формы
		}
		else {
			// Можно добавить сообщение об ошибке, если ни один радиобатон не выбран
			MessageBox::Show(L"Пожалуйста, ответьте на все вопросы перед продолжением.", L"Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
};
}

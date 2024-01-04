#pragma once
#include "r1.h" //подключение Форм
#include "r2.h"
#include "r3.h"
namespace FInal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ методПравыйПрямоугольниковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->методПравыйПрямоугольниковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->методПравыйПрямоугольниковToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(786, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// методПравыйПрямоугольниковToolStripMenuItem
			// 
			this->методПравыйПрямоугольниковToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->функция1ToolStripMenuItem,
					this->функция2ToolStripMenuItem, this->функция3ToolStripMenuItem
			});
			this->методПравыйПрямоугольниковToolStripMenuItem->Name = L"методПравыйПрямоугольниковToolStripMenuItem";
			this->методПравыйПрямоугольниковToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->методПравыйПрямоугольниковToolStripMenuItem->Text = L"Выбор задания";
			this->методПравыйПрямоугольниковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::методПравыйПрямоугольниковToolStripMenuItem_Click);
			// 
			// функция1ToolStripMenuItem
			// 
			this->функция1ToolStripMenuItem->Name = L"функция1ToolStripMenuItem";
			this->функция1ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->функция1ToolStripMenuItem->Text = L"Сортировки";
			this->функция1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция1ToolStripMenuItem_Click);
			// 
			// функция2ToolStripMenuItem
			// 
			this->функция2ToolStripMenuItem->Name = L"функция2ToolStripMenuItem";
			this->функция2ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->функция2ToolStripMenuItem->Text = L"Численный метод";
			this->функция2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция2ToolStripMenuItem_Click);
			// 
			// функция3ToolStripMenuItem
			// 
			this->функция3ToolStripMenuItem->Name = L"функция3ToolStripMenuItem";
			this->функция3ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->функция3ToolStripMenuItem->Text = L"МНК";
			this->функция3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция3ToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Harpseal", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(29, 44);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(744, 48);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Курсовая работа по алгоритмизации и программированию";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(143, 94);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(513, 293);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(566, 258);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 57);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Выполнил:\r\nстудент группы ЦИС - 24\r\nБаскарев Никита";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(786, 367);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(802, 406);
			this->MinimumSize = System::Drawing::Size(802, 406);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Курсовая работа";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void функция1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		r1^ f = gcnew r1(); //подключение Формы r1
		f->ShowDialog();
	}
private: System::Void методПравыйПрямоугольниковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void функция2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r2^ f = gcnew r2(); //подключение Формы r2
	f->ShowDialog();

}
private: System::Void функция3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r3^ f = gcnew r3(); //подключение Формы r3
	f->ShowDialog();
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Программа, созданная в процессе написания курсовой работы. \n \n Данная программа может выполнять: \n \n 1. Cортировки методами Гномья и Слияния. \n \n 2. Решать обыкновенное дифференциальное уравнение модифицированным методом Эйлера \n \n 3. МНК \n \n Преподаватель: Никитина Т.П.", "О программе");
}
};
}
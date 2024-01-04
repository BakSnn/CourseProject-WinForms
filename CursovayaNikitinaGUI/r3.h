#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cliext/list>
namespace FInal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace std;

	/// <summary>
	/// Сводка для r3
	/// </summary>
	public ref class r3 : public System::Windows::Forms::Form
	{
	public:
		r3(void)
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
		~r3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(r3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(228, 256);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r3::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(164, 213);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(420, 19);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"121 84 119 117 129 128 102 111 112 98";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &r3::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(304, 306);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ответ";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(164, 150);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(420, 19);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"72 52 73 74 76 79 54 68 73 64";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &r3::textBox4_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 150);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите X";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(23, 199);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите Y";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(224, 306);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 22);
			this->label4->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(106, 340);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(478, 186);
			this->listBox1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(145, 7);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(392, 29);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Метод наименьших квадратов";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(88, 37);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(526, 54);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Для исходных данных\r\nх – объем капиталовложений (млн. руб.) на десяти предприятия"
				L"х,\r\nу – объем выпуска продукции (млн. руб.).\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(82, 103);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(528, 34);
			this->label7->TabIndex = 15;
			this->label7->Text = L"x         72\t      52       73      74      76      79     54      68       73   "
				L"    64\r\ny        121     84       119    117    129    128    102    111     112"
				L"       98\r\n";
			// 
			// r3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(652, 552);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(668, 591);
			this->MinimumSize = System::Drawing::Size(668, 591);
			this->Name = L"r3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Метод наименьших квадратов";
			this->Load += gcnew System::EventHandler(this, &r3::r3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		// Шаблонная функция для аппроксимации линейной зависимости
template <typename T>
KeyValuePair<T, T> linear_fit(const vector<T>& x, const vector<T>& y) {
    int n = x.size();
    T s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    for (int i = 0; i < n; ++i) {
        s1 += x[i];
        s2 += y[i];
        s3 += x[i] * x[i];
        s4 += x[i] * y[i];
    }

    T a0 = (s2 * s3 - s1 * s4) / (n * s3 - s1 * s1);
    T a1 = (n * s4 - s1 * s2) / (n * s3 - s1 * s1);

    return KeyValuePair<T, T>(a0, a1);
}

// Шаблонная функция для аппроксимации экспоненциальной зависимости
template <typename T>
KeyValuePair<T, T> exp_fit(const vector<T>& x, const vector<T>& y) {
    int n = x.size();
    T s1 = 0.0, s2 = 0.0, s3 = 0.0, s4 = 0.0;

    for (int i = 0; i < n; ++i) {
        s1 += x[i];
        s2 += log(y[i]);
        s3 += pow(x[i], 2);
        s4 += x[i] * log(y[i]);
    }

    T a0 = (s2 * s3 - s1 * s4) / (n * s3 - pow(s1, 2));
    T a1 = (n * s4 - s1 * s2) / (n * s3 - pow(s1, 2));

    return KeyValuePair<T, T>(exp(a0), a1);
}

// Шаблонная функция для аппроксимации гиперболической зависимости
template <typename T>
KeyValuePair<T, T> giper_fit(const vector<T>& x, const vector<T>& y) {
    int n = x.size();
    T s1 = 0.0, s2 = 0.0, s3 = 0.0, s4 = 0.0;

    for (int i = 0; i < n; ++i) {
        s1 += 1 / (x[i] * x[i]);
        s2 += 1 / x[i];
        s3 += y[i] / x[i];
        s4 += y[i];
    }

    T a0 = (s1 * s4 - s2 * s3) / (n * s1 - s2 * s2);
    T a1 = (s3 - a0 * s2) / s1;

    return KeyValuePair<T, T>(a0, a1);
}

// Шаблонная функция для вычисления значения в точке для аппроксимации
template <typename T>
T approx_func(T x, KeyValuePair<T, T> params) {
    return params.Key + params.Value * x;
}

// Шаблонная функция для вычисления среднего отклонения
template <typename T>
T calc_sigm(const vector<T>& y, const vector<T>& y_new) {
    int n = y_new.size();
    T disp = 0;

    for (int i = 0; i < n; i++) {
        disp += abs(y_new[i] - y[i]) * abs(y_new[i] - y[i]);
    }

    disp = disp / n;

    T sigm = sqrt(disp);
    return sigm;
}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Считывание данных из TextBox4 и TextBox2
		String^ x_values_str = textBox4->Text;
		String^ y_values_str = textBox2->Text;

		// Преобразование строк в массивы значений
		cli::array<String^>^ x_strings = x_values_str->Split(' ');
		cli::array<String^> ^ y_strings = y_values_str->Split(' ');

		// Перевод массивов строк в векторы чисел
		vector<double> x;
		vector<double> y;

		for each (String ^ x_str in x_strings) {
			x.push_back(Math::Round(Convert::ToDouble(x_str), 1)); // Округление до 1 знака после запятой
		}

		for each (String ^ y_str in y_strings) {
			y.push_back(Math::Round(Convert::ToDouble(y_str), 1)); // Округление до 1 знака после запятой
		}

		// Линейная аппроксимация
		auto linear_params = linear_fit(x, y);
		vector<double> new_y_linear;
		double sigm_linear;

		listBox1->Items->Add("Линейная аппроксимация:");
		listBox1->Items->Add(String::Format("a0={0:F5}", linear_params.Key));
		listBox1->Items->Add(String::Format("a1={0:F5}", linear_params.Value));
		listBox1->Items->Add("x\t" + "y\t" + "y_new\t\t" + "abs(y-y_new)");

		for (int i = 0; i < x.size(); ++i) {
			double y_new_linear = approx_func(x[i], linear_params);
			double abs_diff_linear = abs(y[i] - y_new_linear);
			listBox1->Items->Add(String::Format("{0:F1}\t{1:F1}\t{2:F5}\t{3:F5}", x[i], y[i], y_new_linear, abs_diff_linear));
			new_y_linear.push_back(y_new_linear);
		}

		sigm_linear = calc_sigm(y, new_y_linear);
		listBox1->Items->Add(String::Format("Среднее отклонение = {0:F5}\r\n", sigm_linear));
		listBox1->Items->Add("\r\n");

		// Экспоненциальная аппроксимация
		auto exp_params = exp_fit(x, y);
		vector<double> new_y_exp;
		double sigm_exp;

		listBox1->Items->Add("Экспоненциальная аппроксимация:");
		listBox1->Items->Add(String::Format("a0={0:F5}", exp_params.Key));
		listBox1->Items->Add(String::Format("a1={0:F5}", exp_params.Value));
		listBox1->Items->Add("x\t" + "y\t" + "y_new\t\t" + "abs(y-y_new)");

		for (int i = 0; i < x.size(); ++i) {
			double y_new_exp = approx_func(x[i], exp_params);
			double abs_diff_exp = abs(y[i] - y_new_exp);
			listBox1->Items->Add(String::Format("{0:F1}\t{1:F1}\t{2:F5}\t\t{3:F5}", x[i], y[i], y_new_exp, abs_diff_exp));
			new_y_exp.push_back(y_new_exp);
		}

		sigm_exp = calc_sigm(y, new_y_exp);
		listBox1->Items->Add(String::Format("Среднее отклонение = {0:F5}\r\n", sigm_exp));
		listBox1->Items->Add("\r\n");

		// Гиперболическая аппроксимация
		auto giper_params = giper_fit(x, y);
		vector<double> new_y_giper;
		double sigm_giper;

		listBox1->Items->Add("Гиперболическая аппроксимация:");
		listBox1->Items->Add(String::Format("a0={0:F5}", giper_params.Key));
		listBox1->Items->Add(String::Format("a1={0:F5}", giper_params.Value));
		listBox1->Items->Add("x\t" + "y\t" + "y_new\t\t" + "abs(y-y_new)");

		for (int i = 0; i < x.size(); ++i) {
			double y_new_giper = approx_func(x[i], giper_params);
			double abs_diff_giper = abs(y[i] - y_new_giper);
			listBox1->Items->Add(String::Format("{0:F1}\t{1:F1}\t{2:F5}\t{3:F5}", x[i], y[i], y_new_giper, abs_diff_giper));
			new_y_giper.push_back(y_new_giper);
		}

		sigm_giper = calc_sigm(y, new_y_giper);
		listBox1->Items->Add(String::Format("Среднее отклонение = {0:F5}", sigm_giper));
	
	}
private: System::Void r3_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

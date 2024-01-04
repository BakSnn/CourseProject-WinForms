#pragma once
#include <cmath>
#include <iostream>
#include <chrono>


#include "r1.cpp"
namespace FInal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// -------------------------------
	using namespace std;
	using namespace std::chrono;

	/// <summary>
	/// Сводка для r1
	/// </summary>
	public ref class r1 : public System::Windows::Forms::Form
	{
	public:
		r1(void)
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
		~r1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(r1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(412, 552);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r1::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(425, 79);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Сортировки";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(460, 166);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(391, 134);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Введите размер массива";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(186, 410);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(260, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Выберите метод сортировки:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton1->Location = System::Drawing::Point(13, 17);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(132, 21);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Метод Гномья";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(2, 659);
			this->splitter1->TabIndex = 11;
			this->splitter1->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton2->Location = System::Drawing::Point(13, 41);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(142, 21);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Метод Слияния";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(556, 410);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Сортировать по:";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(11, 17);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(125, 21);
			this->radioButton3->TabIndex = 14;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Возрастанию";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(11, 41);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(161, 21);
			this->radioButton4->TabIndex = 15;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Неповозрастанию";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(130, 196);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Исходный массив A:";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(568, 194);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(233, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Отсортированный массив:";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(132, 234);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(203, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Тут будет исходный массив A";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(588, 232);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Тут будет отсортированный массив";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(559, 433);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->MaximumSize = System::Drawing::Size(177, 74);
			this->groupBox1->MinimumSize = System::Drawing::Size(164, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(177, 74);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox2->Location = System::Drawing::Point(204, 433);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(166, 74);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(130, 273);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(179, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Исходный массив Б:";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(132, 309);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(203, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Тут будет исходный массив B";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(130, 339);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Исходный массив C:";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(132, 368);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(207, 17);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Тут будет исходный массив C:";
			// 
			// r1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::BlueViolet;
			this->ClientSize = System::Drawing::Size(963, 659);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(979, 698);
			this->MinimumSize = System::Drawing::Size(979, 698);
			this->Name = L"r1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сортировки методом Гномья и методом Слияния";
			this->Load += gcnew System::EventHandler(this, &r1::r1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Функция для сортировки гномья
		void gnomeSort(int arr[], int n, bool ascending) {
			int index = 0;
			while (index < n) {
				if (index == 0) {
					index++;
				}
				if ((ascending && arr[index] >= arr[index - 1]) ||
					(!ascending && arr[index] <= arr[index - 1])) {
					index++;
				}
				else {
					std::swap(arr[index], arr[index - 1]);
					index--;
				}
			}
		}

		// Функция для сортировки слиянием
		void mergeSort(int arr[], int l, int r, bool ascending) {
			if (l < r) {
				int m = l + (r - l) / 2;

				mergeSort(arr, l, m, ascending);
				mergeSort(arr, m + 1, r, ascending);

				merge(arr, l, m, r, ascending);
			}
		}

		// Обновленная функция merge с учетом направления сортировки
		void merge(int arr[], int l, int m, int r, bool ascending) {
			int n1 = m - l + 1;
			int n2 = r - m;

			// Динамическое выделение памяти для временных массивов
			int* L = new int[n1];
			int* R = new int[n2];

			// Копирование данных во временные массивы L[] и R[]
			for (int i = 0; i < n1; i++)
				L[i] = arr[l + i];
			for (int j = 0; j < n2; j++)
				R[j] = arr[m + 1 + j];

			// Объединение временных массивов обратно в arr[l..r]
			int i = 0; // Индекс начального элемента первого подмассива
			int j = 0; // Индекс начального элемента второго подмассива
			int k = l; // Индекс начального элемента объединенного массива

			while (i < n1 && j < n2) {
				if ((ascending && L[i] <= R[j]) || (!ascending && L[i] >= R[j])) {
					arr[k] = L[i];
					i++;
				}
				else {
					arr[k] = R[j];
					j++;
				}
				k++;
			}

			// Копирование оставшихся элементов L[], если они есть
			while (i < n1) {
				arr[k] = L[i];
				i++;
				k++;
			}

			// Копирование оставшихся элементов R[], если они есть
			while (j < n2) {
				arr[k] = R[j];
				j++;
				k++;
			}

			// Освобождение выделенной памяти
			delete[] L;
			delete[] R;
		}

		int processArraysAndDisplay(int* arrayA, int* arrayB, int* arrayC, int size) {
			for (int i = 0; i < size; ++i) {
				arrayA[i] = rand() % 20001 - 10000;
				arrayB[i] = rand() % 20001 - 10000;
			}

			int cSize = 0;

			for (int i = 0; i < size; ++i) {
				if (arrayA[i] % 2 == 0) {
					arrayC[cSize++] = arrayA[i];
				}
			}

			for (int i = 0; i < size; ++i) {
				if (arrayB[i] % 2 != 0) {
					arrayC[cSize++] = arrayB[i];
				}
			}

			// Вывод исходного массива A
			System::String^ outputTextA = "";
			for (int i = 0; i < size; ++i) {
				outputTextA += arrayA[i].ToString() + " ";
			}
			label8->Text = outputTextA;

			// Вывод исходного массива B
			System::String^ outputTextB = "";
			for (int i = 0; i < size; ++i) {
				outputTextB += arrayB[i].ToString() + " ";
			}
			label10->Text = outputTextB;

			// Вывод исходного массива C
			System::String^ outputTextC = "";
			for (int i = 0; i < size; ++i) {
				outputTextC += arrayC[i].ToString() + " ";
			}
			label12->Text = outputTextC;
			return cSize;
		}


	private: System::Void r1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UInt32 size = System::Convert::ToUInt32(textBox1->Text);
		int* arrayA = new int[size];
		int* arrayB = new int[size];
		int* arrayC = new int[size * 2]();
		
		if ((radioButton1->Checked) && (radioButton3 -> Checked)) {
			int cSize = processArraysAndDisplay(arrayA, arrayB, arrayC, size);
			gnomeSort(arrayC, cSize,true);
		System::String^ sortedC = "";
			for (int i = 0; i < cSize; ++i) {
				sortedC += arrayC[i].ToString() + " ";
			}
			label3->Text = sortedC;
		}
		else if ((radioButton1->Checked) && (radioButton4->Checked)) {
			int cSize = processArraysAndDisplay(arrayA, arrayB, arrayC, size);
			gnomeSort(arrayC, cSize, false);
			System::String^ sortedC = "";
			for (int i = 0; i < cSize; ++i) {
				sortedC += arrayC[i].ToString() + " ";
			}
			label3->Text = sortedC;
		}
		else if ((radioButton2->Checked) && (radioButton3 -> Checked)) {
			int cSize = processArraysAndDisplay(arrayA, arrayB, arrayC, size);
			mergeSort(arrayC, 0, cSize - 1, true);
			System::String^ sortedC = "";
			for (int i = 0; i < cSize; ++i) {
				sortedC += arrayC[i].ToString() + " ";
			}
			label3->Text = sortedC;
		}
		else if ((radioButton2->Checked) && (radioButton4->Checked)) {
			int cSize = processArraysAndDisplay(arrayA, arrayB, arrayC, size);
			mergeSort(arrayC, 0, cSize - 1, false);
			System::String^ sortedC = "";
			for (int i = 0; i < cSize; ++i) {
				sortedC += arrayC[i].ToString() + " ";
			}
			label3->Text = sortedC;
		}
		/*long double result = rightRectangleMethod(aa, bb,n);*/
	//textBox2->Text = result.ToString(); // выводим результат в textBox2
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

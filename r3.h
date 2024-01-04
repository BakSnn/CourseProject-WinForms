#pragma once
#include <math.h>
#include <cmath>
namespace FInal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(r3::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 67);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(455, 282);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(482, 99);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 89);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обновить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r3::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(9, 378);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(304, 211);
			this->dataGridView2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(11, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Парная регрессия\r\n";
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::BlueViolet;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(661, 10);
			this->chart->Margin = System::Windows::Forms::Padding(2);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Линейная";
			series1->Name = L"Series1";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Экспоненциальная";
			series2->Name = L"Series2";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Гиперболическая";
			series3->Name = L"Series3";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series4->Legend = L"Legend1";
			series4->LegendText = L"Начальные точки";
			series4->Name = L"Series4";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Series->Add(series4);
			this->chart->Size = System::Drawing::Size(502, 562);
			this->chart->TabIndex = 4;
			this->chart->Text = L"chart1";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(328, 378);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(355, 63);
			this->dataGridView3->TabIndex = 5;
			// 
			// dataGridView4
			// 
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(328, 468);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(355, 63);
			this->dataGridView4->TabIndex = 6;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(328, 561);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView5->Size = System::Drawing::Size(355, 63);
			this->dataGridView5->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(443, 360);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Формула = a + b * x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(443, 450);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Формула = a * exp(b*x)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(443, 543);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Формула = 1 / (b * x + a)";
			// 
			// r3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlueViolet;
			this->ClientSize = System::Drawing::Size(1155, 687);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(1010, 639);
			this->Name = L"r3";
			this->Text = L"Метод наименьших квадратов";
			this->Load += gcnew System::EventHandler(this, &r3::r3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int columns = 5;
		int rows = 10;
		double* X = new double[rows];
		double* Y = new double[rows];

		// Линейная регрессия
		void Aprox(double* x, double* y) {
			int N = rows;
			double* q = new double[N];
			double sx = 0, sy = 0, sxy = 0, sxx = 0, sx2 = 0, sy2 = 0;
			for (int i = 0; i < N; i++) {
				sx += x[i];
				sy += y[i];
				sxx += x[i] * x[i];
				sxy += x[i] * y[i];
				sx2 += pow(x[i], 2);
				sy2 += pow(y[i], 2);
			}
			double K = (sx * sy - N * sxy) / (sx * sx - N * sxx);
			double B = (sy - K * sx) / N;
			for (int j = 0; j < N; j++) {
				q[j] = K * x[j] + B;
				dataGridView1->Rows[j]->Cells[2]->Value = Convert::ToString(round((K * x[j] + B) * 1000) / 1000);
			}
			for (int i = 0; i < N; i++) {
				chart->Series[0]->Points->AddXY(x[i], q[i]);
			}
			double sigma = 0;
			for (int i = 0; i < N; i++) {
				sigma += pow(y[i] - q[i], 2);
			}
			sigma = sqrt(sigma / N);
			dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString(round(sigma * 1000) / 1000);
			dataGridView2->Rows[0]->Height = 50;
			dataGridView3->RowCount = 1;
			dataGridView3->Rows[0]->Cells[0]->Value = "Линейная";
			dataGridView3->Rows[0]->Cells[1]->Value = Convert::ToString(round(K * 1000) / 1000); // Значение коэффициента K
			dataGridView3->Rows[0]->Cells[2]->Value = Convert::ToString(round(B * 1000) / 1000); // Значение коэффициента B
		}

		// Экспоненциальная регрессия
		void ExponAprox(double* x, double* y) {
			int N = rows;
			double* q = new double[N];
			double s1 = 0, s2 = 0, s3 = 0, s4 = 0, sy = 0;
			for (int i = 0; i < N; i++)
			{
				s1 += x[i];
				s2 += log(y[i]);
				s3 += pow(x[i], 2);
				s4 += x[i] * log(y[i]);
				sy += y[i];
			}
			double lna = (N * s4 - s1 * s2) / (N * s3 - s1 * s1);
			double b = (s2 - lna * s1) / N;
			b = exp(b);
			for (int j = 0; j < N; j++) {
				q[j] = b * exp(lna * x[j]);
				dataGridView1->Rows[j]->Cells[3]->Value = Convert::ToString(round(q[j] * 1000) / 1000);
			}
			for (int i = 0; i < N; i++) {
				chart->Series[1]->Points->AddXY(x[i], q[i]);
			}
			double sigma = 0;
			for (int i = 0; i < N; i++) {
				sigma += pow(y[i] - q[i], 2);
			}
			sigma = sqrt(sigma / N);
			dataGridView2->Rows[1]->Cells[0]->Value = Convert::ToString(round(sigma * 1000) / 1000);
			dataGridView2->Rows[1]->Height = 50;
			dataGridView4->RowCount = 1;
			dataGridView4->Rows[0]->Cells[0]->Value = "Экспоненциальная";
			dataGridView4->Rows[0]->Cells[1]->Value = Convert::ToString(round(lna * 1000) / 1000); // Значение коэффициента lna
			dataGridView4->Rows[0]->Cells[2]->Value = Convert::ToString(round(b * 1000) / 1000);   // Значение коэффициента b
		}
		//Гиперболическая регрессия
		void HyperAprox(double* x, double* y) {
			int N = rows;
			double* q = new double[N];
			for (int j = 0; j < N; j++) {
				q[j] = 1 / y[j];
			}
			double sy1x = 0, s1x = 0, sy = 0, s1x2 = 0;
			for (int i = 0; i < N; i++) {
				sy1x += q[i] * x[i];
				s1x += x[i];
				sy += q[i];
				s1x2 += x[i] * x[i];
			}
			double a = (N * sy1x - s1x * sy) / (N * s1x2 - pow(s1x, 2));
			double b = static_cast<double>(sy) / N - ((a * s1x) / N);

			double sigma = 0;
			for (int j = 0; j < N; j++) {
				q[j] = 1 / (a * x[j] + b);
				sigma += pow(y[j] - q[j], 2);
				dataGridView1->Rows[j]->Cells[4]->Value = Convert::ToString((round(q[j] * 1000)) / 1000);
			}
			for (int i = 0; i < N; i++) {
				chart->Series[2]->Points->AddXY(x[i], q[i]);
			}

			sigma = sqrt(sigma / N);
			dataGridView2->Rows[2]->Cells[0]->Value = Convert::ToString(round(sigma * 1000) / 1000);
			dataGridView2->Rows[2]->Height = 50;
			dataGridView5->RowCount = 1;
			dataGridView5->Rows[0]->Cells[0]->Value = "Гиперболическая";
			dataGridView5->Rows[0]->Cells[1]->Value = Convert::ToString(round(a * 10000) / 10000); // Значение коэффициента a
			dataGridView5->Rows[0]->Cells[2]->Value = Convert::ToString(round(b * 10000) / 10000); // Значение коэффициента b
		}

		void Shell(double* X, double* Y, int n) {
			int d = n;
			d /= 2;
			while (d > 0) {
				for (int i = 0; i < n - d; i++) {
					int j = i;
					while (j >= 0 && X[j] > X[j + d]) {
						int tmp_x = X[j], tmp_y = Y[j];
						X[j] = X[j + d];
						X[j + d] = tmp_x;
						Y[j] = Y[j + d];
						Y[j + d] = tmp_y;
						j--;
					}
				}
				d /= 2;
			}
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		// Очистка данных в каждом из четырех графиков (предположительно, chart - это объект ChartControl)
		for (int i = 0; i < 4; i++) {
			chart->Series[i]->Points->Clear();
		}

		// Выделение памяти под массивы для хранения значений X и Y
		double* X = new double[rows];
		double* Y = new double[rows];

		// Заполнение массивов X и Y значениями из ячеек DataGridView
		for (int i = 0; i < rows; i++) {
			X[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
			Y[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}

		// Установка заголовков строк в DataGridView
		for (int i = 0; i < rows; i++) {
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}

		// Повторное заполнение массивов X и Y (дублирование кода)
		for (int i = 0; i < rows; i++) {
			X[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
			Y[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}

		// Добавление точек на график с использованием данных из массивов X и Y в третий график (index = 3)
		for (int i = 0; i < rows; i++) {
			chart->Series[3]->Points->AddXY(X[i], Y[i]);
		}

		// Вызов функций для регрессии данных
		Aprox(X, Y);
		ExponAprox(X, Y);
		HyperAprox(X, Y);
	}
	private: System::Void r3_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = columns;
		dataGridView1->RowCount = rows;
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoSize;
		dataGridView1->RowHeadersWidth = 50;
		dataGridView1->Columns[0]->Width = 50;
		dataGridView1->Columns[1]->Width = 50;
		dataGridView1->Columns[0]->HeaderCell->Value = "X";
		dataGridView1->Columns[1]->HeaderCell->Value = "Y";
		dataGridView1->Columns[2]->HeaderCell->Value = "Линейная регрессия";
		dataGridView1->Columns[3]->HeaderCell->Value = "Экспоненциальная регрессия";
		dataGridView1->Columns[4]->HeaderCell->Value = "Гиперболическая регрессия";
		for (int i = 0; i < rows; i++) {
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}

		double* X = new double[rows] { 72, 52, 73, 74, 76, 79, 54, 68, 73, 64 };
		double* Y = new double[rows] { 121, 84, 119, 117, 129, 128, 102, 111, 112, 98 };
		Shell(X, Y, rows);
		chart->ChartAreas[0]->AxisY->Interval = 50;
		for (int i = 0; i < rows; i++) {
			chart->Series[3]->Points->AddXY(X[i], Y[i]);
		}

		for (int i = 0; i < rows; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(X[i]);
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(Y[i]);
		}



		int coeff_columns = 1;
		int coeff_rows = 3;
		dataGridView2->ColumnCount = coeff_columns;
		dataGridView2->RowCount = coeff_rows;
		dataGridView2->RowHeadersWidth = 150;
		dataGridView2->Columns[0]->Width = 150;
		dataGridView2->Columns[0]->HeaderCell->Value = "Среднеквадратическое отклонение";
		dataGridView2->Rows[0]->HeaderCell->Value = "Линейная\nрегрессия";
		dataGridView2->Rows[1]->HeaderCell->Value = "Экспоненциальная\nрегрессия";
		dataGridView2->Rows[2]->HeaderCell->Value = "Гиперболическая\nрегрессия";

		dataGridView3->Columns->Add("Type", "Тип");
		dataGridView3->Columns->Add("Coefficient1", "Коэффициент a");
		dataGridView3->Columns->Add("Coefficient2", "Коэффициент b");

		dataGridView5->Columns->Add("Type", "Тип");
		dataGridView5->Columns->Add("Coefficient1", "Коэффициент a");
		dataGridView5->Columns->Add("Coefficient2", "Коэффициент b");

		dataGridView4->Columns->Add("Type", "Тип");
		dataGridView4->Columns->Add("Coefficient1", "Коэффициент a");
		dataGridView4->Columns->Add("Coefficient2", "Коэффициент b");
		Aprox(X, Y);
		ExponAprox(X, Y);
		HyperAprox(X, Y);


	}

	};
}
#pragma once
#include "CrearIndices.h"
#include "EliminarIndice.h"
#include "DDLIndices.h"
#include "ModificarIndice.h"

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;

	/// <summary>
	/// Resumen de Indices
	/// </summary>
	public ref class Indices : public System::Windows::Forms::Form
	{
	public:
		Indices(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}


		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	public:

		Form^ Opciones;

		Indices(Form^ opciones, String^ users, String^ pass)
		{
			user = users;
			pas = pass;
			Opciones = opciones;

			if (users->CompareTo("Admin-Mirian") == 0 && pass->CompareTo("georgina") == 0)
			{
				acces = "";
			}
			else
			{
				acces = "\"Admin-Mirian\".";
			}
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~Indices()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Indices::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Indices::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(245, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Indices";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(527, 260);
			this->dataGridView1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(433, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 34);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Crear Indice";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Indices::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(434, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar Indice";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Indices::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(434, 105);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 38);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Modificar Indice";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Indices::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(13, 128);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 34);
			this->button6->TabIndex = 7;
			this->button6->Text = L"DDL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Indices::button6_Click);
			// 
			// Indices
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 451);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Indices";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Indices";
			this->Load += gcnew System::EventHandler(this, &Indices::Indices_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT iname as Nombre, tname as Tabla, indextype as Tipo, colnames as columna FROM sys.SYSINDEXES Where icreator = 'Admin-Mirian' and indextype = 'Non-unique'";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();



				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ConnectionDB();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	CrearIndices^ ci = gcnew CrearIndices(this, user, pas);
	ci->Show();


}
private: System::Void Indices_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	EliminarIndice^ ci = gcnew EliminarIndice(this, user, pas);
	ci->Show();


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLIndices^ ci = gcnew DDLIndices(this, user, pas);
	ci->Show();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Visible = false;
	ModificarIndice^ ci = gcnew ModificarIndice(this, user, pas);
	ci->Show();

}
};
}

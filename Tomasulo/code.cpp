#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
string operators[5] = { "ADD","ADDI","SUB","MUL","DIV" };
int F1 = 0, F2 = 2, F3 = 4, F4 = 6, F5 = 8;
string f1 = "", f2 = "", f3 = "", f4 = "", f5 = "";
int RS1 = -1, RS2 = -1, RS3 = -1, RS4 = -1, RS5 = -1;
int cycle = 0; int now = 0; int* b1rd, * b1rs1, * b1rs2, * b2rd, * b2rs1, * b2rs2;
struct inst {
	string op;
	string rd;
	string rs1;
	int i;
	string rs2;
	string name;
}; 
inst insts[8]; inst R1, R2, R3, R4, R5;
bool b1 = 0, b2 = 0; int b11 = 0, b22 = 0; 
inst bbb1[8], bbb2[8]; int bb1 = 0, bb2 = 0; int wait1 = 0, wait21 = 0, wait22 = 0;
void RF() {
	cout << " _ RF __\n"
		 << "F1 |" << F1 << " |\n"
		 << "F2 |" << F2 << " |\n"
		 << "F3 |" << F3 << " |\n"
		 << "F4 |" << F4 << " |\n"
		 << "F5 |" << F5 << " |\n"
		 << "--------\n";
}
void RAT() {
	if (insts[now].rd == "F1") {
		if (insts[now].op == "ADD" || insts[now].op == "ADDI" || insts[now].op == "SUB") {
			if (RS1 == -1) {
				RS1 = now;
				f1 = "RS1";
				insts[now].name = "RS1";
				R1 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS2 == -1) {
				RS2 = now;
				f1 = "RS2";
				insts[now].name = "RS2";
				R2 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS3 == -1) {
				RS3 = now;
				f1 = "RS3";
				insts[now].name = "RS3";
				R3 = insts[now];
				bbb1[bb1] = insts[now];
			}
			bb1++;
		}
		else if (insts[now].op == "MUL" || insts[now].op == "DIV") {
			if (RS4 == -1) {
				RS4 = now;
				f1 = "RS4";
				insts[now].name = "RS4";
				R4 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else if (RS5 == -1) {
				RS5 = now;
				f1 = "RS5";
				insts[now].name = "RS5";
				R5 = insts[now];
				bbb2[bb2] = insts[now];
			}
			bb2++;
		}
	}
	else if (insts[now].rd == "F2") {
		if (insts[now].op == "ADD" || insts[now].op == "ADDI" || insts[now].op == "SUB") {
			if (RS1 == -1) {
				RS1 = now;
				f2 = "RS1";
				insts[now].name = "RS1";
				R1 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS2 == -1) {
				RS2 = now;
				f2 = "RS2";
				insts[now].name = "RS2";
				R2 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS3 == -1) {
				RS3 = now;
				f2 = "RS3";
				insts[now].name = "RS3";
				R3 = insts[now];
				bbb1[bb1] = insts[now];
			}
			bb1++;
		}
		else if (insts[now].op == "MUL" || insts[now].op == "DIV") {
			if (RS4 == -1) {
				RS4 = now;
				f2 = "RS4";
				insts[now].name = "RS4";
				R4 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else if (RS5 == -1) {
				RS5 = now;
				f2 = "RS5";
				insts[now].name = "RS5";
				R5 = insts[now];
				bbb2[bb2] = insts[now];
			}
			bb2++;
		}
	}
	else if (insts[now].rd == "F3") {
		if (insts[now].op == "ADD" || insts[now].op == "ADDI" || insts[now].op == "SUB") {
			if (RS1 == -1) {
				RS1 = now;
				f3 = "RS1";
				insts[now].name = "RS1";
				R1 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS2 == -1) {
				RS2 = now;
				f3 = "RS2";
				insts[now].name = "RS2";
				R2 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS3 == -1) {
				RS3 = now;
				f3 = "RS3";
				insts[now].name = "RS3";
				R3 = insts[now];
				bbb1[bb1] = insts[now];
			}
			bb1++;
		}
		else if (insts[now].op == "MUL" || insts[now].op == "DIV") {
			if (RS4 == -1) {
				RS4 = now;
				f3 = "RS4";
				insts[now].name = "RS4";
				R4 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else if (RS5 == -1) {
				RS5 = now;
				f3 = "RS5";
				insts[now].name = "RS5";
				R5 = insts[now];
				bbb2[bb2] = insts[now];
			}
			bb2++;
		}
	}
	else if (insts[now].rd == "F4") {
		if (insts[now].op == "ADD" || insts[now].op == "ADDI" || insts[now].op == "SUB") {
			if (RS1 == -1) {
				RS1 = now;
				f4 = "RS1";
				insts[now].name = "RS1";
				R1 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS2 == -1) {
				RS2 = now;
				f4 = "RS2";
				insts[now].name = "RS2";
				R2 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS3 == -1) {
				RS3 = now;
				f4 = "RS3";
				insts[now].name = "RS3";
				R3 = insts[now];
				bbb1[bb1] = insts[now];
			}
			bb1++;
		}
		else if (insts[now].op == "MUL" || insts[now].op == "DIV") {
			if (RS4 == -1) {
				RS4 = now;
				f4 = "RS4";
				insts[now].name = "RS4";
				R4 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else if (RS5 == -1) {
				RS5 = now;
				f4 = "RS5";
				insts[now].name = "RS5";
				R5 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else {
				bbb2[bb2] = insts[now];
			}
			bb2++;
		}
	}
	else if (insts[now].rd == "F5") {
		if (insts[now].op == "ADD" || insts[now].op == "ADDI" || insts[now].op == "SUB") {
			if (RS1 == -1) {
				RS1 = now;
				f5 = "RS1";
				insts[now].name = "RS1";
				R1 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS2 == -1) {
				RS2 = now;
				f5 = "RS2";
				insts[now].name = "RS2";
				R2 = insts[now];
				bbb1[bb1] = insts[now];
			}
			else if (RS3 == -1) {
				RS3 = now;
				f5 = "RS3";
				insts[now].name = "RS3";
				R3 = insts[now];
				bbb1[bb1] = insts[now];
			}
			bb1++;
		}
		else if (insts[now].op == "MUL" || insts[now].op == "DIV") {
			if (RS4 == -1) {
				RS4 = now;
				f5 = "RS4";
				insts[now].name = "RS4";
				R4 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else if (RS5 == -1) {
				RS5 = now;
				f5 = "RS5";
				insts[now].name = "RS5";
				R5 = insts[now];
				bbb2[bb2] = insts[now];
			}
			else {
				bbb2[bb2] = insts[now];
			}
			bb2++;
		}
	}
	cout << "\n _ RAT __\n"
		<< "F1 |" << f1 << " |\n"
		<< "F2 |" << f2 << " |\n"
		<< "F3 |" << f3 << " |\n"
		<< "F4 |" << f4 << " |\n"
		<< "F5 |" << f5 << " |\n"
		<< "--------\n";
	now++;

}
void RS_1() {
	cout << "\n_ RS _________________\n";
	if (RS1 != -1) {
		cout << "RS1 |  ";
		if (insts[RS1].op == "ADDI" || insts[RS1].op == "ADD")
			cout << "+";
		else if (insts[RS1].op == "SUB")
			cout << "-";
		else if (insts[RS1].op == "MUL")
			cout << "*";
		else if (insts[RS1].op == "DIV")
			cout << "/";
		cout << "|";
		if (insts[RS1].rs1 == " F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS1].rs1 == " F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS1].rs1 == " F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS1].rs1 == " F4") {
			cout << F4;
		}
		else if (insts[RS1].rs1 == " F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | ";
		if (insts[RS1].op == "ADDI")
			cout << insts[RS1].i << " | \n";
		else {
			if (insts[RS1].rs2 == " F1" || insts[RS1].rs2 == "F1") {
				if (f1 != "")
					cout << f1;
				else
					cout << F1;
			}
			else if (insts[RS1].rs2 == " F2" || insts[RS1].rs2 == "F2") {
				if (f2 != "")
					cout << f2;
				else
					cout << F2;
			}
			else if (insts[RS1].rs2 == " F3" || insts[RS1].rs2 == "F3") {
				if (f3 != "")
					cout << f3;
				else
					cout << F3;
			}
			else if (insts[RS1].rs2 == " F4" || insts[RS1].rs2 == "F4") {
				if (f4 != "")
					cout << f4;
				else
					cout << F4;
			}
			else if (insts[RS1].rs2 == " F5" || insts[RS1].rs2 == "F5") {
				if (f5 != "")
					cout << f5;
				else
					cout << F5;
			}
			cout << "|\n";
		}
	}
	else {
		cout << "RS1 |      |      |      |\n";
	}
	if (RS2 != -1) {
		cout << "RS2 |  ";
		if (insts[RS2].op == "ADDI" || insts[RS2].op == "ADD")
			cout << "+";
		else if (insts[RS2].op == "SUB")
			cout << "-";
		else if (insts[RS2].op == "MUL")
			cout << "*";
		else if (insts[RS2].op == "DIV")
			cout << "/";
		cout << "|";
		if (insts[RS2].rs1 == "F1"|| insts[RS2].rs1 == " F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS2].rs1 == " F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS2].rs1 == " F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS2].rs1 == " F4") {
			if (f4 != "")
				cout << f4;
			else
				cout << F4;
		}
		else if (insts[RS2].rs1 == " F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | ";
		if (insts[RS2].op == "ADDI")
			cout << insts[RS2].i << " | \n";
		else {
			if (insts[RS2].rs2 == " F1" || insts[RS2].rs2 == "F1") {
				if (f1 != "")
					cout << f1;
				else
					cout << F1;
			}
			else if (insts[RS2].rs2 == " F2" || insts[RS2].rs2 == "F2") {
				if (f2 != "")
					cout << f2;
				else
					cout << F2;
			}
			else if (insts[RS2].rs2 == " F3" || insts[RS2].rs2 == "F3") {
				if (f3 != "")
					cout << f3;
				else
					cout << F3;
			}
			else if (insts[RS2].rs2 == " F4" || insts[RS2].rs2 == "F4") {
				if (f4 != "")
					cout << f4;
				else
					cout << F4;
			}
			else if (insts[RS2].rs2 == " F5" || insts[RS2].rs2 == "F5") {
				if (f5 != "")
					cout << f5;
				else
					cout << F5;
			}
			cout << " | \n";
		}
	}
	else {
		cout << "RS2 |      |      |      |\n";
	}
	if (RS3 != -1) {
		cout << "RS3 |  ";
		if (insts[RS3].op == "ADDI" || insts[RS3].op == "ADD")
			cout << "+";
		else if (insts[RS3].op == "SUB")
			cout << "-";
		else if (insts[RS3].op == "MUL")
			cout << "*";
		else if (insts[RS3].op == "DIV")
			cout << "/";
		cout << "|";
		if (insts[RS3].rs1 == " F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS3].rs1 == " F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS3].rs1 == " F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS3].rs1 == " F4") {
			if (f4 != "")
				cout << f4;
			else
				cout << F4;
		}
		else if (insts[RS3].rs1 == " F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | ";
		if (insts[RS3].op == "ADDI")
			cout << insts[RS3].i << " | \n";
		else {
			if (insts[RS3].rs2 == " F1" || insts[RS3].rs2 == "F1") {
				if (f1 != "")
					cout << f1;
				else
					cout << F1;
			}
			else if (insts[RS3].rs2 == " F2" || insts[RS3].rs2 == "F2") {
				if (f2 != "")
					cout << f2;
				else
					cout << F2;
			}
			else if (insts[RS3].rs2 == " F3" || insts[RS3].rs2 == "F3") {
				if (f3 != "")
					cout << f3;
				else
					cout << F3;
			}
			else if (insts[RS3].rs2 == " F4" || insts[RS3].rs2 == "F4") {
				if (f4 != "")
					cout << f4;
				else
					cout << F4;
			}
			else if (insts[RS3].rs2 == " F5" || insts[RS3].rs2 == "F5") {
				if (f5 != "")
					cout << f5;
				else
					cout << F5;
			}
			cout << "|\n";
		}
	}
	else {
		cout << "RS3 |      |      |      |\n";
	}

	cout << "----------------------\n";
	if (bbb1[b11].rd == "F1") {
		b1rd = &F1;
	}
	else if (bbb1[b11].rd == "F2") {
		b1rd = &F2;
	}
	else if (bbb1[b11].rd == "F3") {
		b1rd = &F3;
	}
	else if (bbb1[b11].rd == "F4") {
		b1rd = &F4;
	}
	else if (bbb1[b11].rd == "F5") {
		b1rd = &F5;
	}
	if (bbb1[b11].rs1 == " F1") {
		b1rs1 = &F1;
	}
	else if (bbb1[b11].rs1 == " F2") {
		b1rs1 = &F2;
	}
	else if (bbb1[b11].rs1 == " F3") {
		b1rs1 = &F3;
	}
	else if (bbb1[b11].rs1 == " F4") {
		b1rs1 = &F4;
	}
	else if (bbb1[b11].rs1 == " F5") {
		b1rs1 = &F5;
	}
	if (bbb1[b11].rs2 == " F1" || bbb1[b11].rs2 == "F1") {
		b1rs2 = &F1;
	}
	else if (bbb1[b11].rs2 == " F2" || bbb1[b11].rs2 == "F2") {
		b1rs2 = &F2;
	}
	else if (bbb1[b11].rs2 == " F3"|| bbb1[b11].rs2 == "F3") {
		b1rs2 = &F3;
	}
	else if (bbb1[b11].rs2 == " F4" || bbb1[b11].rs2 == "F4") {
		b1rs2 = &F4;
	}
	else if (bbb1[b11].rs2 == " F5" || bbb1[b11].rs2 == "F5") {
		b1rs2 = &F5;
	}
	if (bbb1[b11].rd != "")
		b1 = 1;
	if (cycle == 1 || b1 == 0) {
		cout << "BUFFER: empty\n";
	}
	else if (wait1 < 2 ) {
		cout << "BUFFER: ";
		if (bbb1[b11].op == "ADD") {
			cout << "(" << bbb1[b11].name << ") " << *b1rs1 << "+" << *b1rs2 << endl;
		}
		else if (bbb1[b11].op == "ADDI") {
			cout << "(" << bbb1[b11].name << ") " << *b1rs1 << "+" << bbb1[b11].i << endl;
		}
		else if (bbb1[b11].op == "SUB") {
			cout << "(" << bbb1[b11].name << ") " << *b1rs1 << "-" << *b1rs2 << endl;
		}
		wait1++;
	}
	if (wait1 == 2) {
		if (bbb1[b11].name != f1 && bbb1[b11].name != f2 && bbb1[b11].name != f3 && bbb1[b11].name != f4 && bbb1[b11].name != f5) {
		}
		else if (bbb1[b11].op == "ADD") {
			*b1rd = *b1rs1 + *b1rs2;
		}
		else if (bbb1[b11].op == "ADDI") {
			*b1rd = *b1rs1 + bbb1[b11].i;
		}
		else if (bbb1[b11].op == "SUB") {
			*b1rd = *b1rs1 - *b1rs2;
		}
		if(bbb1[b11].name =="RS1")
			RS1 = -1;
		else if (bbb1[b11].name == "RS2")
			RS2 = -1;
		else if (bbb1[b11].name == "RS3")
			RS3 = -1;
		else if (bbb1[b11].name == "RS4")
			RS4 = -1;
		else if (bbb1[b11].name == "RS5")
			RS5 = -1;
		if (bbb1[b11].name == f1) {
			f1 = "";
		}
		else if (bbb1[b11].name == f2){
			f2 = "";
		}
		else if (bbb1[b11].name == f3) {
			f3 = "";
		}
		else if (bbb1[b11].name == f4 ) {
			f4 = "";
		}
		else if (bbb1[b11].name == f5 ) {
			f5 = "";
		}
		wait1 = 0;
		b11++; b1 = 0;
	}
}
void RS_2() {
	cout << "_ RS _________________\n";
	if (RS4 != -1) {
		cout << "RS4 |  ";
		if (insts[RS4].op == "ADDI" || insts[RS4].op == "ADD")
			cout << "+";
		else if (insts[RS4].op == "SUB")
			cout << "-";
		else if (insts[RS4].op == "MUL")
			cout << "*";
		else if (insts[RS4].op == "DIV")
			cout << "/";
		cout << "|";
		if (insts[RS4].rs1 == " F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS4].rs1 == " F2") {
				cout << F2;
		}
		else if (insts[RS4].rs1 == " F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS4].rs1 == " F4") {
			if (f4 != "")
				cout << f4;
			else
				cout << F4;
		}
		else if (insts[RS4].rs1 == " F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | ";
		if (insts[RS4].rs2 == " F1" || insts[RS4].rs2 == "F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS4].rs2 == " F2" || insts[RS4].rs2 == "F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS4].rs2 == " F3"|| insts[RS4].rs2 == "F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS4].rs2 == " F4" || insts[RS4].rs2 == "F4") {
			if (f4 != "")
				cout << f4;
			else
				cout << F4;
		}
		else if (insts[RS4].rs2 == " F5" || insts[RS4].rs2 == "F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | \n";
	}
	else {
		cout << "RS4 |      |      |      |\n";
	}
	if (RS5 != -1) {
		cout << "RS5 |  ";
		if (insts[RS5].op == "ADDI" || insts[RS5].op == "ADD")
			cout << "+";
		else if (insts[RS5].op == "SUB")
			cout << "-";
		else if (insts[RS5].op == "MUL")
			cout << "*";
		else if (insts[RS5].op == "DIV")
			cout << "/";
		cout << "|";
		if (insts[RS5].rs1 == " F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS5].rs1 == " F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS5].rs1 == " F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS5].rs1 == " F4") {
			if (f4 != "")
				cout << f4;
			else
				cout << F4;
		}
		else if (insts[RS5].rs1 == " F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " |";
		cout << "|";
		if (insts[RS5].rs2 == " F1" || insts[RS5].rs2 == "F1") {
			if (f1 != "")
				cout << f1;
			else
				cout << F1;
		}
		else if (insts[RS5].rs2 == " F2" || insts[RS5].rs2 == "F2") {
			if (f2 != "")
				cout << f2;
			else
				cout << F2;
		}
		else if (insts[RS5].rs2 == " F3" || insts[RS5].rs2 == "F3") {
			if (f3 != "")
				cout << f3;
			else
				cout << F3;
		}
		else if (insts[RS5].rs2 == " F4" || insts[RS5].rs2 == "F4") {
			cout << F4;
		}
		else if (insts[RS5].rs2 == " F5"|| insts[RS5].rs2 == "F5") {
			if (f5 != "")
				cout << f5;
			else
				cout << F5;
		}
		cout << " | \n";
	}
	else {
		cout << "RS5 |      |      |      |\n";
	}
	cout << "----------------------\n";
	if (bbb2[b22].rd == "F1") {
		b2rd = &F1;
	}
	else if (bbb2[b22].rd == "F2") {
		b2rd = &F2;
	}
	else if (bbb2[b22].rd == "F3") {
		b2rd = &F3;
	}
	else if (bbb2[b22].rd == "F4") {
		b2rd = &F4;
	}
	else if (bbb2[b22].rd == "F5") {
		b2rd = &F5;
	}
	if (bbb2[b22].rs1 == " F1") {
		b2rs1 = &F1;
	}
	else if (bbb2[b22].rs1 == " F2") {
		b2rs1 = &F2;
	}
	else if (bbb2[b22].rs1 == " F3") {
		b2rs1 = &F3;
	}
	else if (bbb2[b22].rs1 == " F4") {
		b2rs1 = &F4;
	}
	else if (bbb2[b22].rs1 == " F5") {
		b2rs1 = &F5;
	}
	if (bbb2[b22].rs2 == " F1"|| bbb2[b22].rs2 == "F1") {
		b2rs2 = &F1;
	}
	else if (bbb2[b22].rs2 == " F2" || bbb2[b22].rs2 == "F2") {
		b2rs2 = &F2;
	}
	else if (bbb2[b22].rs2 == " F3"|| bbb2[b22].rs2 == "F3") {
		b2rs2 = &F3;
	}
	else if (bbb2[b22].rs2 == " F4" || bbb2[b22].rs2 == "F4") {
		b2rs2 = &F4;
	}
	else if (bbb2[b22].rs2 == " F5" || bbb2[b22].rs2 == "F5") {
		b2rs2 = &F5;
	}
	if (bbb2[b22].rd != "")
		b2 = 1;
	if (cycle == 1 || b2 == 0) {
		cout << "BUFFER: empty\n";
	}
	else if (wait21 < 10&& bbb2[b22].op == "MUL") {
		cout << "BUFFER: " << "(" << bbb2[b22].name << ") " << *b2rs1 << "*" << *b2rs2 << endl;
		wait21++;
	}
	else if (wait22 < 40&& bbb2[b22].op == "DIV") {
		cout << "BUFFER: " << "(" << bbb2[b22].name << ") " << *b2rs1 << "/" << *b2rs2 << endl;
		wait22++;
	}
	if (wait21 == 10) {
		if (bbb2[b22].name == "RS1")
			RS1 = -1;
		else if (bbb2[b22].name == "RS2")
			RS2 = -1;
		else if (bbb2[b22].name == "RS3")
			RS3 = -1;
		else if (bbb2[b22].name == "RS4")
			RS4 = -1;
		else if (bbb2[b22].name == "RS5")
			RS5 = -1;
		if (bbb2[b22].name == f1 ) {
			RS1 = -1;
			f1 = "";
		}
		else if (bbb2[b22].name == f2 ) {
			RS2 = -1;
			f2 = "";
		}
		else if (bbb2[b22].name ==f3 ) {
			RS3 = -1;
			f3 = "";
		}	
		else if (bbb2[b22].name == f4) {
			RS4 = -1;
			f4 = "";
		}	
		else if (bbb2[b22].name ==  f5) {
			RS5 = -1;
			f5 = "";
		}
		*b2rd = *b2rs1 * *b2rs2;
		wait21 = 0;
		b22++; b2 = 0;
	}
	else if (wait22 == 40) {
		if (bbb2[b22].name == "RS1")
			RS1 = -1;
		else if (bbb2[b22].name == "RS2")
			RS2 = -1;
		else if (bbb2[b22].name == "RS3")
			RS3 = -1;
		else if (bbb2[b22].name == "RS4")
			RS4 = -1;
		else if (bbb2[b22].name == "RS5")
			RS5 = -1;
		if (bbb2[b22].name ==  f1 ) {
			RS1 = -1;
			f1 = "";
		}
		else if (bbb2[b22].name ==f2) {
			RS2 = -1;
			f2 = "";
		}
		else if (bbb2[b22].name == f3 ) {
			RS3 = -1;
			f3 = "";
		}
		else if (bbb2[b22].name == f4 ) {
			RS4 = -1;
			f4 = "";
		}
		else if (bbb2[b22].name == f5 ) {
			RS5 = -1;
			f5 = "";
		}
		*b2rd = *b2rs1 * *b2rs2;
		wait22 = 0;
		b22++; b2 = 0;
	}
}
int main() {
	int n = 8, j = 0; string instruction;
	while (n > 0) {
		int i = 0; 
		getline(cin, instruction);
		while (instruction[i] != ' ') {
			insts[j].op += instruction[i];
			i++;
		}i++;
		for (int k = 0; k < 5; k++) {
			if (operators[k] == insts[j].op) {
				if (k == 1) {
					while (instruction[i] != '\,') {
						insts[j].rd += instruction[i];
						i++;
					}i++;
					while (instruction[i] != '\,') {
						insts[j].rs1 += instruction[i];
						i++;
					}i += 2;
					string integer;
					while (instruction[i] != '\0') {
						integer += instruction[i];
						i++;
					}
					insts[j].i = stoi(integer);
					insts[j].rs2 = "-1";
				}
				else {
					while (instruction[i] != '\,') {
						insts[j].rd += instruction[i];
						i++;
					}i++;
					while (instruction[i] != '\,') {
						insts[j].rs1 += instruction[i];
						i++;
					}i += 2;
					while (instruction[i] != '\0') {
						insts[j].rs2 += instruction[i];
						i++;
					}
					insts[j].i = -1;
				}
				break;
			}
		}
		n--; j++;
	}
	while (1) {
		cycle++;
		cout << "\nCycle = " << cycle << endl;
		RF();
		RAT();
		RS_1();
		RS_2();
		if (b11 + b22 == 8) {
			cycle++;
			cout << "\nCycle = " << cycle << endl;
			RF();
			RAT();
			RS_1();
			RS_2();
			break;
		}
	}
}

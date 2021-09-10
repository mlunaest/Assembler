#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstring>
#include <bitset>
#include <vector>
#include <sstream>
#include <cmath>
#include <cstdlib>
using namespace std;

map <string, string> create_jmap(){
map<string, string> jmap;
	jmap["100000"] = "add";//done
	jmap["100001"] = "addu";//done
	jmap["100001"] = "sub";//done
	jmap["100011"] = "subu";//done
	jmap["100100"]= "and";//done
	jmap["100101"]= "or";//done
	jmap["011000"] = "mult";//done
	jmap["011001"] = "multu";//done
	jmap["011010"] = "div";//done
	jmap["011011"] = "divu";//done
	jmap["001001"] = "jalr";//done
	jmap["001000"] = "jr";//done
	jmap["000000"] = "sll";//done
	jmap["101010"]= "slt";//done
	jmap["101001"] = "sltu";//done
	jmap["100110"] = "xor";//done
	jmap["100111"] = "nor";//done
	jmap["000010"]="srl";//done
	jmap["000011"] = "sra";//done
return jmap;
}


map <string, string> reverse_regs(){
	 map<string,string> rev_regs;
		rev_regs["00000"] = "$zero"; //r0
		rev_regs["00001"] = "$at";
		rev_regs["00010"] = "$v0";
		rev_regs["00011"] = "$v1";
		rev_regs["00100"]="$a0";//r4
		rev_regs["00101"] = "$a1";
		rev_regs["00110"]="$a2";
		rev_regs["00111"] = "$a3"; 
		rev_regs["01000"]="$t0"; //r8
		rev_regs["01001"]= "$t1";//r9
		rev_regs["01010"] = "$t2";//r10
		rev_regs["01011"] = "$t3";//r11
		rev_regs["01100"] = "$t4";//r12
		rev_regs["01101"] = "$t5";//r13
		rev_regs["01110"] = "$t6";
		rev_regs["01111"] = "$t7";//r15
		rev_regs["10000"] = "$s0";//r16
		rev_regs["10001"] = "$s1";//r17
		rev_regs["10010"] = "$s2";//r18
		rev_regs["10011"] = "$s3";//r19
		rev_regs["10100"] = "$s4";//r20
		rev_regs["10101"] = "$s5";//r21
		rev_regs["10110"] = "$s6";//r22
		rev_regs["10111"] = "$s7";//r23
		rev_regs["11000"] = "$t8";//r24
		rev_regs["11001"] = "$t9";//r25
		rev_regs["11010"] = "$k0";//r26
		rev_regs["11011"] = "$k1";//r27
		rev_regs["11100"] = "$gp";//r28
		rev_regs["11101"] = "$sp";//r29
		rev_regs["11110"] = "$fp";//r30
		rev_regs["11111"] = "$ra";//r31
		
	return rev_regs;
}

map<string,string> reverse_map(){
	  map<string,string> rev_ops;
		rev_ops["001110"] = "xori";//done
		rev_ops["100011"]= "lw";//done
		rev_ops["100000"] = "lb";//done
		rev_ops["100100"] = "lbu";//done
		rev_ops["100001"] = "lh";//done
		rev_ops["100101"] = "lhu";//done
		rev_ops["101011"]= "sw";//done
		rev_ops["101000"] = "sb";//done
		rev_ops["101001"] = "sh";//done
		rev_ops["001100"] = "andi";//done
		rev_ops["001101"] =  "ori";//done
		rev_ops["001111"]= "lui";//done
		rev_ops["000100"]= "beq";//
		rev_ops["000101"] = "bne";//
		rev_ops["000110"] = "blez";//
		rev_ops["000111"] = "bgtz";//
		rev_ops["000001"] = "bltz";//
		rev_ops["000001"] = "bgez";//
		rev_ops["001010"]="slti";//done
		rev_ops["001001"] = "sltiu";//done
		rev_ops["001000"]="addi";//done
		rev_ops["001001"] = "addiu";//done
		rev_ops["000010"]="j";//done
		rev_ops["000011"]= "jal";//done
  return rev_ops;
}



map<string,string> create_map()
{
  map<string,string> opcodes;
		opcodes["add"] = "100000";//done
		opcodes["addu"] = "100001";//done
		opcodes["sub"] = "100001";//done
		opcodes["subu"] = "100011";//done
		opcodes["and"]= "100100";//done
		opcodes["or"]= "100101";//done
		opcodes["mult"] = "011000";//done
		opcodes["multu"] = "011001";//done
		opcodes["div"] = "011010";//done
		opcodes["divu"] = "011011";//done
		opcodes["sll"] = "000000";//done
		opcodes["slt"]= "101010";//done
		opcodes["sltu"] = "101001";//done
		opcodes["xor"] = "100110";//done
		opcodes["xori"] = "001110";//done
		opcodes["nor"] = "100111";//done
		opcodes["srl"]="000010";//done
	//	opcodes["jr"] = "001000"; this is a duplicate
		opcodes["lw"]= "100011";//done
		opcodes["lb"] = "100000";//done
		opcodes["lbu"] = "100100";//done
		opcodes["lh"] = "100001";//done
		opcodes["lhu"] = "100101";//done
		opcodes["sw"]= "101011";//done
		opcodes["sb"] = "101000";//done
		opcodes["sh"] = "101001";//done
		opcodes["sra"] = "000011";//done
		opcodes["andi"] = "001100";//done
		opcodes["ori"] =  "001101";//done
		opcodes["lui"]="001111";//done
		opcodes["beq"]="000100";//done
		opcodes["bne"] = "000101";//done
		opcodes["blez"] = "000110";//done
		opcodes["bgtz"] = "000111";//done
		opcodes["bltz"] = "000001";//done
		opcodes["bgez"] = "000001";//done
		opcodes["slti"]="001010";//done
		opcodes["sltiu"] = "001001";//done
		opcodes["addi"]="001000";//done
		opcodes["addiu"] = "001001";//done
		opcodes["j"]="000010";//done
		opcodes["jal"]= "000011";//done
		opcodes["jalr"] = "001001";//done
		opcodes["jr"] = "001000";//done
  return opcodes;
}

map<string,string> create_regs(){

  map<string,string> regs;
		regs["$r0"] = "00000";
		regs["$r1"] = "00001";
		regs["$r2"] = "00010";
		regs["$r3"] = "00011";
		regs["$r4"]= "00100";
		regs["$r5"]= "00101";
		regs["$r6"] = "00110";
		regs["$r7"] = "00111";
		regs["$r8"] = "01000";
		regs["$r9"] = "01001";
		regs["$r10"] = "01010";
		regs["$r11"]= "01011";
		regs["$r12"] = "01100";
		regs["$r13"] = "01101";
		regs["$r14"] = "01110";
		regs["$r15"] = "01111";
		regs["$r16"]="10000";
		regs["$r17"] = "10001";
		regs["$r18"]= "10010";
		regs["$r19"] = "10011";
		regs["$r20"] = "10100";
		regs["$r21"] = "10101";
		regs["$r22"] = "10110";
		regs["$r23"]= "10111";
		regs["$r24"] = "11000";
		regs["$r25"] = "11001";
		regs["$r26"] = "11010";
		regs["$r27"] = "11011";
		regs["$r28"] =  "11100";
		regs["$r29"]="11101";
		regs["$r30"]="11110";
		regs["$r31"] = "11111";
		regs["$zero"] = "00000"; //r0
		regs["$at"] = "00001";
		regs["$v0"] = "00010";
		regs["$v1"] = "00011";
		regs["$a0"]="00100";//r4
		regs["$a1"] = "00101";
		regs["$a2"]="00110";
		regs["$a3"] = "00111"; 
		regs["$t0"]="01000"; //r8
		regs["$t1"]= "01001";//r9
		regs["$t2"] = "01010";//r10
		regs["$t3"] = "01011";//r11
		regs["$t4"] = "01100";//r12
		regs["$t5"] = "01101";//r13
		regs["$t6"] = "01110";
		regs["$t7"] = "01111";//r15
		regs["$s0"] = "10000";//r16
		regs["$s1"] = "10001";//r17
		regs["$s2"] = "10010";//r18
		regs["$s3"] = "10011";//r19
		regs["$s4"] = "10100";//r20
		regs["$s5"] = "10101";//r21
		regs["$s6"] = "10110";//r22
		regs["$s7"] = "10111";//r23
		regs["$t8"] = "11000";//r24
		regs["$t9"] = "11001";//r25
		regs["$k0"] = "11010";//r26
		regs["$k1"] = "11011";//r27
		regs["$gp"] = "11100";//r28
		regs["$sp"] = "11101";//r29
		regs["$fp"] = "11110";//r30
		regs["$ra"] = "11111";//r31
  return regs;
}

int base = 0;
int data = 0;
map<string, double> labels; //store labels in a map 

string get_shamt(string s){//get 5 bits of shamt
	int i = atoi(s.c_str());
	string binary = std::bitset<5>(i).to_string();
	return binary;
}

string get_imm(string s){ //get 16 bit immediate number
	int i = atoi(s.c_str());
	string binary = std::bitset<16>(i).to_string();
	return binary;
}

string get_target(string bin) //Function For Signed Binary to Decimal.
{
    int decimal = 0, i = 0, remainder;
	int n;
	n = atoi(bin.c_str());

    //Two's Compliment.
    if (bin[0] == '1'){
    	bin = bin.substr(1, bin.size()-1);
    	n = atoi(bin.c_str());
		n = ~n + 1;	
	}

    //Conversion to Decimal.
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2,i);
        ++i;
    }
    decimal = (decimal + 128)%256 - 128;
// int x=42;            //The integer
	string str;          //The string
	ostringstream temp;  //temp as in temporary
	temp<<decimal;
	str=temp.str();  

    return str;
}

string get_offset(string binary) 
{
    
	int power = pow(2,16-1);
    int sum = 0;
    int i;

    for (i=0; i<16; ++i)
    {
        if ( i==0 && binary[i]!='0')
        {
            sum = power * -1;
        }
        else 
        {
            sum += (binary[i]-'0')*power;//The -0 is needed
        }
        power /= 2;
    }


	string str;          //The string
	ostringstream temp;  //temp as in temporary
	temp<<sum;
	str=temp.str();  
    return str;
}

//first pass function
int parse1(string file, string& data_addr, string& base_addr, int instruction_count){

	ifstream myfile(file.c_str());
	
	map<string, string> opcodes = create_map();
	string word;
	int i = 0;
	int textf = 0; //a flag for when we reached the text
//	int base;
//	int data;
	string temp;
	int line_count;

	for (i=0; myfile >> word; i++){
		temp = word.substr(0,2);
		if (word[0] == '#' or temp == "//"){
			getline(myfile, temp);
			cout << "comment reached" << endl;		
		}else if (word == "DataAddr:"){
			myfile >> word;
			data_addr = word.substr(0, word.size()-1);
			data = strtol(data_addr.c_str(), NULL, 16);
		}else if (word == "BaseAddr:"){
			myfile >> word;
			base_addr = word.substr(0, word.size()-1);
			base = strtol(base_addr.c_str(), NULL, 16);
			cout << "base is " << base << endl;
			textf = 1;
		}else if (word[(strlen(word.c_str())-1)] == ':'){
			string lbl = word.substr(0, word.size()-1);
			labels[lbl] = instruction_count + base;
			cout <<"This is at address: " << labels[lbl] << endl;
		}
		else if (opcodes.find(word)!=opcodes.end()){
			instruction_count = instruction_count+4;
		}
		cout << word << endl;
	}
	
	return instruction_count;
}

//second pass for interpretating
vector<string> parse2(string file){ //TODO: modify for comments, modify for hex, and remove last semicolon
	
	ifstream myfile(file.c_str());
	map<string, string> opcodes = create_map();
	map<string, string> regs = create_regs();
	vector <string> bins;
	string word;
	string rt;
	string rd; 
	string rs;
	int i;
	int line = 0; //needed for offset - the instruction address we're currently at
	
	for (i=0; myfile >> word; i++) {
		string output;
		if ((word == "add") or (word == "addu") or (word == "sub") or (word == "subu") or (word == "and") or (word == "or") or (word == "xor") or (word == "slt") or (word == "nor") or (word == "sltu")){
			string temp = word;
			output = "000000";
			myfile >> word;
			rd = word.substr(0, word.size()-1);
			myfile >> word;
			rs = word.substr(0, word.size()-1);
			myfile >> word;
			rt = word.substr(0, word.size()-1);
			
			output += regs[rs] + regs[rt] + regs[rd] + "00000" + opcodes[temp];		
			cout << output << endl; 
		}else if((word == "srl") or (word == "sll") or (word == "sra")){ //shifting bits
			string temp = word;
			output += "00000000000";				
			myfile >> word;
			rt = word.substr(0, word.size()-1); //remove the last character - a comma or a semicolon
			myfile >> word;
			rd = word.substr(0, word.size()-1);//remove the comma
			myfile >> word;
			word = word.substr(0, word.size()-1); //remove the semicolon		
			word = get_shamt(word);
			output += regs[rd] + regs[rd] + word + opcodes[temp]; //the shamt bits and the func code	
			cout << output << endl;	
		}else if ((word == "addi") or (word == "addiu") or (word == "sltiu") or (word == "slti") or (word == "andi") or (word == "ori") or (word == "xori")){
			output = opcodes[word]; //modify so it can deal with hexadecimal as well
			myfile >> word;
			rs = word.substr(0, word.size()-1);
			myfile >> word;
			rt = word.substr(0, word.size()-1);			
			myfile >> word;
			word = get_imm(word);
			output += regs[rt] + regs[rs] + word;
			cout << output << endl;
		}else if ((word == "lb") or (word == "lh") or (word == "lw") or (word == "lbu") or (word == "lhu") or (word == "sb") or (word == "sh") or (word == "sw")){
			output = opcodes[word];
			myfile >> word; 
			rt = word.substr(0, word.size()-1);
			rs.clear();
			myfile >> word; //a number and brackets
			string num;
			i = 0;
			while(isdigit(word[i])){
				num += word[i];
				i++;
				}
			i++;	//skip the opening bracket	
			while (word[i]!= ')'){
				rs += word[i];
				i++;	
				}
			output += regs[rs] + regs[rt] + get_imm(num);
			cout << output << endl;
		}else if (word == "lui"){ //TODO: optimize for hex
			output = opcodes[word];
			myfile >> word;
			rt = word.substr(0, word.size()-1);
			rs = "00000";
			myfile >> word; //an immediate number that ends in a semicolon
			word = word.substr(0, word.size()-1);
			output += rs + regs[rt] + get_imm(word);
			cout << output << endl;
		}else if (word == "mult" or word == "multu" or word == "div" or word == "divu"){
			string temp = word;
			myfile >> word;
			rs = word.substr(0, word.size()-1); //remove comma
			myfile >> word;
			rt = word.substr(0, word.size()-1);//remove semicolon
			output = "000000" + regs[rs] + regs[rt] + "0000000000"+ opcodes[temp];
			cout << output << endl;
		}else if (word == "bne" or word == "beq"){
			string temp = word;
			myfile >> word;
			rs = word.substr(0, word.size()-1); 
			myfile >> word;
			rt = word.substr(0, word.size()-1);
			myfile >> word; //the label
			int offset = labels[word.substr(0, word.size()-1)] - (base + line); //the address relative to the current line - a number	
			word = std::bitset<16>(offset).to_string();	//convert to 16 bit number;
			output = opcodes[temp] + regs[rs] + regs[rt] + word; 
			cout << output << endl;
		}else if (word == "blez" or word == "bgtz" or word == "bltz" or (word == "bgez")){
			string temp = word;
			rt = "00000";
			if (temp == "bgez"){rt = "00001";}
			myfile >> word;
			rs = word.substr(0, word.size()-1);
			myfile >> word; //get the offset number
			int offset = labels[word.substr(0, word.size()-1)] - (base + line); //the address relative to the current line - a number
//			cout << "line is:" << line << endl;
//			cout << "word is:" << word << endl;
//			cout << "offset is: " << offset << endl;
			word = std::bitset<16>(offset).to_string();	//convert to 16 bit number;
			output = opcodes[temp] + regs[rs] + rt + word; 
			cout << output << endl;
		}else if (word == "j" or word == "jal"){
			output = opcodes[word];
			myfile >> word;//this is a label
			cout << "target is at: " <<labels[word.substr(0, word.size()-1)] << endl;
			int target = labels[word.substr(0, word.size()-1)];//the target label
			word = std::bitset<26>(target).to_string();	//convert to 26 bit number;
			output += word;
			cout << output << endl;		
		}else if (word == "jalr" or word == "jr"){
			string temp = word;
			output = "000000";
			myfile >> word; //get rs;
			rs = word.substr(0, word.size()-1); 
			rt = "00000";
			rd = "00000";
			if (temp == "jalr"){
				myfile >> word; //get second register
				rd = regs[word.substr(0, word.size()-1)];	
			}
			output += regs[rs] + rt + rd + "00000" + opcodes[temp];
			cout << output << endl;
		}
		else{
	//		line = line - 4;
			continue;
		}
		
		line = line + 4;
		bins.push_back(output);
		
	}
	return bins;
	myfile.close();
}

//create a binary file
void create_bin(string fname, vector<string> bins){
	string rename = fname.substr(0, fname.size()-4);
	rename += ".bin"; //create a new document with a .bin extension
	
	ofstream myfile;
  	myfile.open (rename.c_str());
 	for (std::vector<string>::const_iterator i = bins.begin(); i != bins.end(); ++i)
    	myfile << *i << endl;	
  	myfile.close();
	
	
}


void disassemble_bin(string file){

	ifstream myfile(file.c_str());
	map<string, string> rev_ops = reverse_map();
	map<string, string> rev_regs = reverse_regs();
	map <string, string> jmap = create_jmap();
	map <double, string> rev_labels; //reverse map of labels for ease
	for (map<string, double>::iterator i = labels.begin(); i != labels.end(); ++i)
    	rev_labels[i->second] = i->first;
	
	int i;
//	time to disassemble whoo
	string opcode;
	string shamt;
	string rd;
	string rt;
	string rs;
	string func;
	string output;
	string word;
	int line = 0;
	for (i=0; myfile >> word; i++){
		opcode = word.substr(0, 6); 

		if (opcode == "000000"){
			//this is a j-type instruction
			rs = word.substr(6, 5); 
			rt = word.substr(11, 5); 
			rd = word.substr(16, 5); 
			shamt = word.substr(22, 5); 
			func = word.substr(26, 6);
			output = jmap[func];//
			
			if (output == "srl" or output == "sra" or output == "sll"){ //include an if statement for jr and jalr
				output += " " + rev_regs[rd] + ", " + rev_regs[rt] + ";"; 
			}else if (output == "mult" || output == "multu" || output == "div" || output == "divu"){
				output += " " + rev_regs[rs] +", "+ rev_regs[rt] + ";";
			}else if (output == "jalr"){
				output += " " + rev_regs[rs] +", "+ rev_regs[rd] + ";";
			}else if (output == "jr"){
				output += " " + rev_regs[rs] + ";";
			}else{
				output += " " + rev_regs[rd] + ", " + rev_regs[rs] +", " + rev_regs[rt]+";";
			}
		}else if (rev_ops[opcode] == "addi" || rev_ops[opcode] == "addiu" || rev_ops[opcode] == "slti" || rev_ops[opcode] == "sltiu" || rev_ops[opcode] == "andi" || rev_ops[opcode] == "ori" || rev_ops[opcode] == "xori"){
			rs = word.substr(6, 5); 
			rt = word.substr(11, 5);
			string imm = get_offset(word.substr(16, 16)); //get the 16-bit offset
			output = rev_ops[opcode] + " " + rev_regs[rt] +", "+ rev_regs[rs] +", " + imm +";";
		}else if(rev_ops[opcode] == "lb" || rev_ops[opcode] == "lh" || rev_ops[opcode] == "lw"|| rev_ops[opcode] == "lbu"|| rev_ops[opcode] == "lhu"|| rev_ops[opcode] == "sb"|| rev_ops[opcode] == "sh"|| rev_ops[opcode] == "sw"){
			rs = word.substr(6, 5); 
			rt = word.substr(11, 5);
			string imm = get_offset(word.substr(16, 16)); //get the 16-bit offset
			output = rev_ops[opcode] + " " + rev_regs[rt] + ", " + imm + "(" + rev_regs[rs] + ");";
		}else if (rev_ops[opcode] == "lui"){
			rt = word.substr(11, 5);
			string imm = get_offset(word.substr(16, 16));
			output = "lui " + rev_regs[rt] + ", " + imm + ";";
		}else if (rev_ops[opcode] == "j" || rev_ops[opcode] == "jal"){
			//have to find what address a label corresponds to
			string imm = get_target(word.substr(6, 26));
			int addr = atoi(imm.c_str());
			output = rev_ops[opcode] + " " + rev_labels[addr] + ";";
		}else if (rev_ops[opcode] == "blez"|| rev_ops[opcode] == "bgtz"|| rev_ops[opcode] == "bltz"|| rev_ops[opcode] == "bgez"){
			rs = word.substr(6, 5); 
			string imm = get_offset(word.substr(16, 16)); //the offset
			int addr = atoi(imm.c_str()) + line; //find the label at the new address
			output = rev_ops[opcode] + " " + rev_regs[rs] +", " + rev_labels[addr] + ";";
		}else if (rev_ops[opcode] == "beq" || rev_ops[opcode] == "bne"){
			rs = word.substr(6, 5); 
			rt = word.substr(11, 5);
			string imm = get_offset(word.substr(16, 16)); //the offset
			int addr = atoi(imm.c_str()) + line; //find the label at the new address
			output = rev_ops[opcode] + " " + rev_regs[rs] +", " + rev_regs[rt]+ ", " + rev_labels[addr] + ";";
		}
		cout << output << endl;
		line = line+4;
	}

	myfile.close();
	
}

//////////////////////////main function///////////////////////////

int main(){

	int pass = 1; //how many passes have we done?
	int instruction_count = 0; //how many instructions are there
	string data_addr = "\0";
	string base_addr = "\0";
	vector<string> bins;//each item in the vector is a line of binary code.
	string filename;
	cout << "Input the full name of the file you wish to convert: ";
	cin >> filename;
	
	instruction_count = parse1(filename, data_addr, base_addr, instruction_count); //pass one - get the labels
	bins = parse2(filename); //pass two - interpret
	create_bin(filename, bins);
	disassemble_bin("testing.bin");
	
//	cout << "//////////////////////testing vector////////////////////" << endl;
//	for (std::vector<string>::const_iterator i = bins.begin(); i != bins.end(); ++i)
//	   	std::cout << *i << endl;
//	
//
//	cout << data << endl;
//	cout << base << endl;
//	cout << instruction_count << endl;

	
	return 0;
}

#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>

System::String^ FileName(System::String^ filename, System::String^ filling) {
	std::string namefile = msclr::interop::marshal_as<std::string>(filename);
	std::string filling1 = msclr::interop::marshal_as<std::string>(filling);
	std::ofstream file(namefile);
	file << filling1;
	file.close();
	return filename;
}




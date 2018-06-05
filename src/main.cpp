#include <Repository.hpp>
#include <Directory.hpp>

#include <iostream>

int main(int argc, char** argv) {
	auto repo = synclib::Repository::createFromFileSystem("F:\\Umwandlung\\Musik\\Bioshock");
	auto dirTree = repo->getDirectoryTree();
	std::cout << dirTree->getName();
	std::cin.get();

	return 0;
}
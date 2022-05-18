// Copyright 2022 Remizova Antonina

#include <vector>
#include "include/queue_application.h"

int main(int argc, const char** argv) {
	QueueApplication q_app;
	std::string output = q_app(argc, argv);
	std::cout << output << std::endl;
	return 0;
}
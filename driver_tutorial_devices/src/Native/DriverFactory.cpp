#include "DriverFactory.hpp"

void* HmdDriverFactory(const char* interface_name, int* return_code) {

	if (return_code)
		*return_code = vr::VRInitError_Init_InterfaceNotFound;

	return nullptr;
}
#pragma once

class CBus;
class MemMappedDevice
{
public:
	MemMappedDevice() {}
	virtual ~MemMappedDevice() {}

	virtual void Reset() = 0;
	virtual void Read(uint32_t address, uint32_t& data) = 0;
	virtual void Write(uint32_t address, uint32_t data, uint32_t wstrobe) = 0;
};

#include "Serialisation.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->data = "je suis un test";
	raw = serialize(ptr);
	new_ptr = deserialize(raw);
	std::cout << "new_ptr->data = " << new_ptr->data << std::endl;

	delete ptr;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Data		*data = new Data();
	uintptr_t	n = 12;

	data->data = "Paul";

	std::cout << "Addr data : " << &data << std::endl;
	std::cout << "Addr n    : " << &n << std::endl;

	std::cout << std::endl << "SERIALIZATION" << std::endl;
	serialize(data);
	std::cout << "Addr data : " << &data << std::endl;

	std::cout << std::endl << "DESERIALIZATION" << std::endl;
	deserialize(n);
	std::cout << "Addr n    : " << &n << std::endl;

	delete data;
	return 0;
}
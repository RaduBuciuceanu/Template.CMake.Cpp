#include "Cmps.Data/Repositories/PersonRepository.h"

namespace Cmps::Data::Repositories
{
const Person* PersonRepository::create(const Person* person)
{
	_persons.push_back(person);
	return person;
}
}
// Project: CGear
//
//  Created on: 09.09.2015
//      Author: K.Pinegin
//       email: keldgaden@gmail.com
//

#ifndef INSTRUCTION_VARIABLE_H_
#define INSTRUCTION_VARIABLE_H_

#include "../types/type.h"
#include "../../lexer/token.h"
#include "operator.h"

class ast::instruction::variable
{
	friend ast::instruction;
protected:
	class implementation: public ast::instruction::base
	{
		ast::type type;
		token::identifier id;
		ast::operation init;
	public:
		implementation(ast::type type, token::identifier id, ast::operation init): type(type), id(id), init(init) {}
		void* operator new(size_t size) {
			return memory_pool.allocate(size);
		}
		void operator delete(void* pointer) {
			memory_pool.deallocate(pointer);
		}
	};
public:
	variable(ast::type type, token::identifier id, ast::operation init): impl(new implementation(type, id, init)) {}
private:
	static pool<sizeof(implementation), 1024> memory_pool;
	std::shared_ptr<implementation> impl;
};

#endif /* INSTRUCTION_VARIABLE_H_ */
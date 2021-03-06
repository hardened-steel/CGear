// Project: CGear
//
//  Created on: 03.10.2015
//      Author: K.Pinegin
//       email: keldgaden@gmail.com
//

#ifndef AST_MODULE_H
#define AST_MODULE_H

#include <utility/instance.hpp>
#include <boost/variant.hpp>
#include "function/function.h"
#include "types/type.h"
#include "ast.h"

class ast::module
{
public:
	using statement = boost::variant<ast::function::instance, ast::type::instance>;
	std::vector<statement> statements;
public:
	class visitor;
public:
	module() {}
	module(const std::vector<statement>& statements): statements(statements) {}
	module(std::vector<statement>&& statements): statements(std::move(statements)) {}
	void codegen();
};

#endif /* AST_MODULE_H */

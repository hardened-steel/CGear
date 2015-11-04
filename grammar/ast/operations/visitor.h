// Project: CGear
//
//  Created on: 31.10.2015
//      Author: K.Pinegin
//       email: keldgaden@gmail.com
//

#ifndef GRAMMAR_AST_OPERATIONS_VISITOR_H_
#define GRAMMAR_AST_OPERATIONS_VISITOR_H_

#include "binary.h"
#include "call.h"
#include "ternary.h"
#include "unary.h"
#include "variable.h"
#include "literal.h"

class ast::operation::visitor
{
public:
	virtual void visit(ast::operation::unary&) = 0;
	virtual void visit(ast::operation::binary&) = 0;
	virtual void visit(ast::operation::ternary&) = 0;
	//virtual void visit(ast::operation::type_cast&) = 0;
	virtual void visit(ast::operation::variable&) = 0;
	//virtual void visit(ast::operation::index&) = 0;
	//virtual void visit(ast::operation::section&) = 0;
	virtual void visit(ast::operation::call&) = 0;
	//virtual void visit(ast::operation::array&) = 0;
	virtual void visit(ast::operation::literal&) = 0;
	virtual ~visitor() {}
};

#endif /* GRAMMAR_AST_OPERATIONS_VISITOR_H_ */

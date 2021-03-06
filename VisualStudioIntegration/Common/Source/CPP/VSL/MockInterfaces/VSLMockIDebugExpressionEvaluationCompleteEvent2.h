/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IDEBUGEXPRESSIONEVALUATIONCOMPLETEEVENT2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IDEBUGEXPRESSIONEVALUATIONCOMPLETEEVENT2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "msdbg.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IDebugExpressionEvaluationCompleteEvent2NotImpl :
	public IDebugExpressionEvaluationCompleteEvent2
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IDebugExpressionEvaluationCompleteEvent2NotImpl)

public:

	typedef IDebugExpressionEvaluationCompleteEvent2 Interface;

	STDMETHOD(GetExpression)(
		/*[out]*/ IDebugExpression2** /*ppExpr*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(GetResult)(
		/*[out]*/ IDebugProperty2** /*ppResult*/)VSL_STDMETHOD_NOTIMPL
};

class IDebugExpressionEvaluationCompleteEvent2MockImpl :
	public IDebugExpressionEvaluationCompleteEvent2,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IDebugExpressionEvaluationCompleteEvent2MockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IDebugExpressionEvaluationCompleteEvent2MockImpl)

	typedef IDebugExpressionEvaluationCompleteEvent2 Interface;
	struct GetExpressionValidValues
	{
		/*[out]*/ IDebugExpression2** ppExpr;
		HRESULT retValue;
	};

	STDMETHOD(GetExpression)(
		/*[out]*/ IDebugExpression2** ppExpr)
	{
		VSL_DEFINE_MOCK_METHOD(GetExpression)

		VSL_SET_VALIDVALUE_INTERFACE(ppExpr);

		VSL_RETURN_VALIDVALUES();
	}
	struct GetResultValidValues
	{
		/*[out]*/ IDebugProperty2** ppResult;
		HRESULT retValue;
	};

	STDMETHOD(GetResult)(
		/*[out]*/ IDebugProperty2** ppResult)
	{
		VSL_DEFINE_MOCK_METHOD(GetResult)

		VSL_SET_VALIDVALUE_INTERFACE(ppResult);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IDEBUGEXPRESSIONEVALUATIONCOMPLETEEVENT2_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

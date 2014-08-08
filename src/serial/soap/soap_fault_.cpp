/* $Id: soap_fault_.cpp 341797 2011-10-24 13:50:24Z gouriano $
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'soap_11.xsd'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <serial/soap/soap_fault.hpp>

BEGIN_NCBI_SCOPE
// generated classes

void CSoapFault_Base::C_Detail::ResetAnyContent(void)
{
    m_AnyContent.clear();
    m_set_State[0] &= ~0x3;
}

void CSoapFault_Base::C_Detail::Reset(void)
{
    ResetAnyContent();
}

BEGIN_NAMED_CLASS_INFO("detail", CSoapFault_Base::C_Detail)
{
    SET_CLASS_MODULE("soap_11");
    SET_NAMESPACE("http://schemas.xmlsoap.org/soap/envelope/")->SetNsQualified(false);
    ADD_NAMED_MEMBER("AnyContent", m_AnyContent, STL_list, (STL_CRef, (STD, (ncbi::CAnyContentObject))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CSoapFault_Base::C_Detail::C_Detail(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CSoapFault_Base::C_Detail::~C_Detail(void)
{
}


void CSoapFault_Base::ResetFaultcode(void)
{
    m_Faultcode.erase();
    m_set_State[0] &= ~0x3;
}

void CSoapFault_Base::ResetFaultstring(void)
{
    m_Faultstring.erase();
    m_set_State[0] &= ~0xc;
}

void CSoapFault_Base::ResetFaultactor(void)
{
    m_Faultactor.erase();
    m_set_State[0] &= ~0x30;
}

void CSoapFault_Base::ResetDetail(void)
{
    m_Detail.Reset();
}

void CSoapFault_Base::SetDetail(CSoapFault_Base::TDetail& value)
{
    m_Detail.Reset(&value);
}

CSoapFault_Base::TDetail& CSoapFault_Base::SetDetail(void)
{
    if ( !m_Detail )
        m_Detail.Reset(new C_Detail());
    return (*m_Detail);
}

void CSoapFault_Base::Reset(void)
{
    ResetFaultcode();
    ResetFaultstring();
    ResetFaultactor();
    ResetDetail();
}

BEGIN_NAMED_BASE_CLASS_INFO("Fault", CSoapFault)
{
    SET_CLASS_MODULE("soap_11");
    SET_NAMESPACE("http://schemas.xmlsoap.org/soap/envelope/")->SetNsQualified(false);
    ADD_NAMED_STD_MEMBER("faultcode", m_Faultcode)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("faultstring", m_Faultstring)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("faultactor", m_Faultactor)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("detail", m_Detail, C_Detail)->SetOptional()->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CSoapFault_Base::CSoapFault_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CSoapFault_Base::~CSoapFault_Base(void)
{
}

END_NCBI_SCOPE


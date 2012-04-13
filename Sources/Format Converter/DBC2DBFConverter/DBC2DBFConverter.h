/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      DBC2DBFConverter.h
 * \brief     Definition of converter class
 * \author    Tobias Lorenz
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Definition of converter class.
 */

#pragma once

#include "../FormatConverterApp/BaseConverter.h"

class CDBC2DBFConverter : public CBaseConverter
{
    CString m_omstrConversionStatus;
    HRESULT m_hResult;
public:
    CDBC2DBFConverter(void);
    virtual HRESULT GetInputFileFilters(TCHAR*, TCHAR* );
    virtual HRESULT GetOutputFileFilters(TCHAR*, TCHAR* );
    virtual HRESULT ConvertFile(TCHAR* chInputFile, TCHAR* chOutputFile);
    virtual HRESULT GetConverterName(string& strConverterName); 
    virtual HRESULT GetErrorStatus(HRESULT hResult, CString& omstrStatus);
    virtual HRESULT GetLastConversionStatus(HRESULT& hResult, CString& omstrStatus);
    virtual HRESULT GetHelpText(TCHAR* pchHelpText);
    virtual BOOL bHaveOwnWindow();
    virtual HRESULT GetPropertyPage(CPropertyPage*& pPage){return S_FALSE;};
    ~CDBC2DBFConverter(void);
};
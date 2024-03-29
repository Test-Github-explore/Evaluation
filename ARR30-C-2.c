// ARR30-C: Noncompliant Code Example (Dereferencing Past-the-End Pointer)

error_status_t _RemoteActivation(
      /* ... */, WCHAR *pwszObjectName, ... ) {
   *phr = GetServerPath(
              pwszObjectName, &pwszObjectName);
    /* ... */
}
 
HRESULT GetServerPath(
  WCHAR *pwszPath, WCHAR **pwszServerPath ){
  WCHAR *pwszFinalPath = pwszPath;
  WCHAR wszMachineName[MAX_COMPUTERNAME_LENGTH_FQDN+1];
  hr = GetMachineName(pwszPath, wszMachineName);
  *pwszServerPath = pwszFinalPath;
}
 
HRESULT GetMachineName(
  WCHAR *pwszPath,
  WCHAR wszMachineName[MAX_COMPUTERNAME_LENGTH_FQDN+1])
{
  pwszServerName = wszMachineName;
  LPWSTR pwszTemp = pwszPath + 2;
  while (*pwszTemp != L'\\')
    *pwszServerName++ = *pwszTemp++;
  /* ... */
}

//main関数
int main(void) {
  WCHAR *pwszObjectName;
  WCHAR *pwszServerPath;
  error_status_t *phr;
  _RemoteActivation(
    /* ... */, pwszObjectName, phr);
  return 0;
}

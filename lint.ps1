$status = 0

Write-Host "Beginning linting..."

Get-ChildItem -Path "include/rtri" -Recurse -Filter *.hpp | ForEach-Object {
    $file = $_.FullName
    # Run clang-tidy for each file, redirecting error output to null
    & clang-tidy $file -p=out/clang-tidy --quiet 2>$null
    if ($LASTEXITCODE -ne 0) {
        Write-Host "Error in $file"
        $status = 1
    }
}

Write-Host "Linting complete."
exit $status

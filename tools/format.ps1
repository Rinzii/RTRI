# Run the Python formatting script for the specified directory and extensions
python format.py ../include/rtri --extensions .h,.hpp

# Check the exit code to display an appropriate message
if ($LASTEXITCODE -ne 0) {
    Write-Host "Error: Failed to run the format script."
    exit $LASTEXITCODE
} else {
    Write-Host "Format script ran successfully."
}

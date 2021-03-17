void WritePipe(HANDLE Pipe, const std::string& Data)
{
	DWORD DwWritten;
	WriteFile(Pipe, (Data + "\n").c_str(), Data.size() + 1, &DwWritten, NULL);
	FlushFileBuffers(Pipe);
}

// I'm not sure if this works, but might as well try.

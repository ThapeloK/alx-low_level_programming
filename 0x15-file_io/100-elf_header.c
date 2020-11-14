#include <elf.h>
#include "holberton.h"
#include <stdio.h>
#include <byteswap.h>

/**
 * main - readelf clone! reads elf header info and prints it out.
 *
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: Returns 1 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int file, data, arch, readval, check, retval;
	void *header;
	Elf64_Ehdr sixtyfour; Elf32_Ehdr thirtytwo;

	if (argc != 2)
	{
		printf("usage: %s elf_filename\n", argv[0]); exit(98);
	}
	if (argv[1] == NULL)
		error("Null filename.", 98);
	arch = getHeader(argv);file = open(argv[1], O_RDONLY);
	if (file == -1)
		error("Cannot open file.\n", 98);
	if (arch == 32)
	{
		header = &thirtytwo; check = sizeof(Elf32_Ehdr);
		readval = read(file, header, check);
	}
	else
	{
		header = &sixtyfour; check = sizeof(Elf64_Ehdr);
		readval = read(file, header, check);
	}
	if (readval == -1 || readval != check)
		error("Cannot read from file.\n", 98);
	checkHeader(header); printMagic(header);
	arch = printClass(header); data = printData(header);
	printVersion(header); printOS(header); printABIVersion(header);
	if (data == 1)
	{
		printType(header); printEntry(header);
	}
	else
	{
		bigType(header); bigEntry(header, arch);
	}
	retval = close(file);
	if (retval == -1)
		error("Cannot close file.\n", 98);
	return (0);
}

/**
 * getHeader - Mallocs out the appropriate header based on the class.
 *
 * @argv: arguments passed to main
 * Return: Returns a pointer to the header.
 */
int getHeader(char *argv[])
{
	int file, retval;
	char value;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		error("Cannot open file.\n", 98);
	retval = lseek(file, 5, SEEK_SET);
	if (retval == -1 || retval != 5)
		error("Lseek error.\n", 98);
	retval = read(file, &value, 1);
	if (retval == -1)
		error("Read error.\n", 98);
	retval = close(file);
	if (retval == -1)
		error("Cannot close file.\n", 98);
	if (value == ELFCLASS32)
		return (32);
	return (64);
}

/**
 * checkHeader - ensures the magic bytes are valid
 *
 * @header: pointer to an Elf_Ehdr
 */
void checkHeader(void *header)
{
	Elf64_Ehdr *ehdr = header;

	if (ehdr->e_ident[0] != ELFMAG0 || ehdr->e_ident[1] != ELFMAG1 ||
	    ehdr->e_ident[2] != ELFMAG2 || ehdr->e_ident[3] != ELFMAG3)
	{
		error("Error: Not an ELF file- it has the wrong magic bytes at the start\n",
		      98);
	}
}

/**
 * printMagic - prints the magic numbers!
 *
 * @header: pointer to an Elf_Ehdr
 */
void printMagic(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	printf("%02x ", ehdr->e_ident[0]);
	printf("%02x ", ehdr->e_ident[1]);
	printf("%02x ", ehdr->e_ident[2]);
	printf("%02x ", ehdr->e_ident[3]);
	printf("%02x ", ehdr->e_ident[4]);
	printf("%02x ", ehdr->e_ident[5]);
	printf("%02x ", ehdr->e_ident[6]);
	printf("%02x ", ehdr->e_ident[7]);
	printf("%02x ", ehdr->e_ident[8]);
	printf("%02x ", ehdr->e_ident[9]);
	printf("%02x ", ehdr->e_ident[10]);
	printf("%02x ", ehdr->e_ident[11]);
	printf("%02x ", ehdr->e_ident[12]);
	printf("%02x ", ehdr->e_ident[13]);
	printf("%02x ", ehdr->e_ident[14]);
	printf("%02x\n", ehdr->e_ident[15]);
}

/**
 * printClass - prints class info
 *
 * @header: pointer to an Elf_Ehdr
 * Return: returns 32 for 32 bit arch, 64 for 64
 */
int printClass(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Class:");
	printf("                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		return (32);
	case ELFCLASS64:
		printf("ELF64\n");
		return (64);
	case ELFCLASSNONE:
		printf("Invalid class\n");
		return (64);
	default:
		printf("<unknown: %x>\n", ehdr->e_ident[EI_CLASS]);
		return (64);
	}
}

/**
 * printData - prints data type info for elf header
 *
 * @header: pointer to an Elf_Ehdr
 * Return: Returns 1 for little endian, 2 for big
 */
int printData(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Data:");
	printf("                              ");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Invalid ELF data\n");
		return (1);
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		return (1);
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		return (2);
	default:
		printf("<unknown: %x>\n", ehdr->e_ident[EI_DATA]);
		return (1);
	}
}

/**
 * printVersion - prints version information
 *
 * @header: pointer to an Elf_Ehdr
 */
void printVersion(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Version:");
	printf("                           ");
	switch (ehdr->e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("Invalid version");
		break;
	case EV_CURRENT:
		printf("1 (current)");
		break;
	default:
		printf("<unknown: %d>", ehdr->e_ident[EI_VERSION]);
	}
	printf("\n");
}

/**
 * printOS - prints OS information
 *
 * @header: pointer to an Elf_Ehdr
 */
void printOS(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  OS/ABI:");
	printf("                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case 0:
		printf("UNIX - System V"); break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX"); break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD"); break;
	case 3:
		printf("UNIX - GNU"); break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris"); break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX"); break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX"); break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD"); break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64"); break;
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto"); break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD"); break;
	case 13:
		printf("VMS - OpenVMS"); break;
	case 14:
		printf("HP - Non-Stop Kernel"); break;
	case 15:
		printf("AROS"); break;
	case 16:
		printf("FenixOS"); break;
	default:
		printf("<unknown: %x>", ehdr->e_ident[EI_OSABI]);
	}
	printf("\n");
}

/**
 * printABIVersion - prints ABI version
 *
 * @header: pointer to an Elf_Ehdr
 */
void printABIVersion(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  ABI Version:");
	printf("                       ");
	printf("%d", ehdr->e_ident[EI_ABIVERSION]);
	printf("\n");
}

/**
 * printType - prints type information
 *
 * @header: pointer to an Elf_Ehdr
 */
void printType(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Type:");
	printf("                              ");
	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown: %x>", ehdr->e_type);
	}
	printf("\n");
}

/**
 * printEntry - prints entry point address
 *
 * @header: pointer to an Elf_Ehdr
 */
void printEntry(void *header)
{
	Elf64_Ehdr *ehdr = header;

	printf("  Entry point address:");
	printf("               ");
	printf("0x%x\n", (unsigned int) ehdr->e_entry);
}

/**
 * bigType - prints type information, converts from big endian
 *
 * @header: pointer to an Elf_Ehdr
 */
void bigType(void *header)
{
	Elf64_Ehdr *ehdr = header;
	uint16_t type;

	type = __bswap_16(ehdr->e_type);
	printf("  Type:");
	printf("                              ");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown: %x>", type);
	}
	printf("\n");
}

/**
 * bigEntry - prints entry point information after converting from big endian
 *
 * @header: pointer to an Elf_Ehdr
 * @arch: 64 or 32 bit
 */
void bigEntry(void *header, int arch)
{
	Elf64_Ehdr *ehdr;
	Elf32_Ehdr *ehdr32;
	Elf64_Addr entry;
	Elf32_Addr entry32;

	if (arch == 64)
	{
		ehdr = header;
		entry = __bswap_64(ehdr->e_entry);
		printf("  Entry point address:");
		printf("               ");
		printf("0x%lx\n", entry);
	}
	else
	{
		ehdr32 = header;
		entry32 = __bswap_32(ehdr32->e_entry);
		printf("  Entry point address:");
		printf("               ");
		printf("0x%x\n", entry32);
	}

}


/**
 * error - writes an error to stderr, exits with given errorcode
 *
 * @exitcode: code to exit with
 * @errmsg: errmsg to print to stderr
 */
void error(char *errmsg, int exitcode)
{
	write(STDERR_FILENO, errmsg, _strlen(errmsg));
	exit(exitcode);
}

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

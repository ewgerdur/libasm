#include "libasm.h"

#include "libasm.h"

int	main(void)
{
	char src[] = {"2213"};
	char dest[] = {"1111111"};
	char dest2[] = {"1111111"};
	char *rax = 0;
	char *a1;
    char *b1;

    printf("########################TEST1#######################\n");

    printf("ft_strlen\n%lu %lu\n",strlen(src), ft_strlen(src));
	printf("%lu %lu\n",strlen(dest), ft_strlen(dest));
	printf("%lu %lu\n",strlen("1234567890"), ft_strlen("1234567890"));
	printf("%lu %lu\n",strlen(""), ft_strlen(""));



    printf("########################TEST2#######################\n");


	printf("ft_strcpy\nsrc %s, dest %s\n", src, dest);
	rax = ft_strcpy(dest, src);
	printf("src %s, dest %s, rax %s\n", src, dest, rax);
	printf("strcpy\nsrc %s, dest %s\n", src, dest2);
	rax = strcpy(dest2, src);
	printf("src %s, dest %s, rax %s\n", src, dest2, rax);

	printf("s1 - ABC    s2 - null\n");
    a1 = strdup("ABC");
    b1 = strdup("ABC");
	printf("ft_strcpy - %s\n", ft_strcpy(a1, ""));
	printf("strcpy - %s\n", strcpy(b1, ""));

    free(a1);
    free(b1);

	printf("s1 - null    s2 - null\n");
    a1 = strdup("");
    b1 = strdup("");
	printf("ft_strcpy - %s\n", ft_strcpy(a1, ""));
	printf("strcpy - %s\n", strcpy(b1, ""));

    free(a1);
    free(b1);

    printf("########################TEST3#######################\n");


    printf("s1 - ABC    s2 - ABC\n");
    a1 = strdup("ABC");
    b1 = strdup("ABC");
	printf("ft_strcmp - %d\n", ft_strcmp(a1, b1));
	printf("strcmp - %d\n", strcmp(a1, b1));

    free(a1);
    free(b1);

	printf("s1 - ABE    s2 - ABC\n");
    a1 = strdup("ABE");
    b1 = strdup("ABC");
	printf("ft_strcmp - %d\n", ft_strcmp(a1, b1));
	printf("strcmp - %d\n", strcmp(a1, b1));

    free(a1);
    free(b1);

    printf("s1 - null    s2 - ABC\n");
    a1 = strdup("");
    b1  = strdup("ABC");
	printf("ft_strcmp - %d\n", ft_strcmp(a1, b1));
	printf("strcmp - %d\n", strcmp(a1, b1));

    free(a1);
    free(b1);


	printf("s1 - null    s2 - null\n");
    a1 = strdup("");
    b1  = strdup("");
	printf("ft_strcmp - %d\n", ft_strcmp(a1, b1));
	printf("strcmp - %d\n", strcmp(a1, b1));

    free(a1);
    free(b1);

    printf("########################TEST4#######################\n");
	int  fd;
	int  testread;
	int testft_read;
	static char test[25];
	fd = open("./Makefile", O_RDONLY);
	errno = 0;
	testread = read(fd, test, 5);
	close(fd);
	printf("\nread %s\n rax  %d, err  %d\n", test, testread, errno);
	fd = open("./Makefile", O_RDONLY);
	errno = 0;
	test[0] = 0;
	testft_read = ft_read(fd, test, 5);
	close(fd);
	printf("ft_read %s\n rax  %d, err  %d\n", test, testft_read, errno);
	errno = 0;
	test[0] = 0;
	testread = read(156, test, 5);
	printf("read %s\n rax  %d, err  %d\n", test, testread, errno);
	errno = 0;
	test[0] = 0;
	testft_read = ft_read(156, test, 5);
	close(fd);
	printf("ft_read %s\n rax  %d, err  %d\n", test, testft_read, errno);

    printf("########################TEST5#######################\n");

	errno = 0;
    printf("write   %ld errno   %d\n", write(7, "123\n", 4), errno);
	errno = 0;
	printf("ft_write %ld errno  %d\n",  ft_write(7, "123\n", 4), errno);
	errno = 0;
	printf("write  %ld errno  %d\n", write(1, "123\n", 4), errno);
	errno = 0;
	printf("ft_write %ld errno %d\n", ft_write(1, "123\n", 4), errno);

    printf("########################TEST6#######################\n");

	errno = 0;
    char *test2 = ft_strdup("ABC");
	printf("%s, errno %d\n", test2, errno);
	errno = 0;
	char *test3 = strdup("ABC");
	printf("%s, errno %d\n", test3, errno);
	free(test2);
	free(test3);

	errno = 0;
    test2 = ft_strdup("");
	printf("%s, errno %d\n", test2, errno);
	errno = 0;
	test3 = strdup("");
	printf("%s, errno %d\n", test3, errno);
	free(test2);
	free(test3);
}

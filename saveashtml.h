int		coortohtml(struct coor c, int gametype);
void	PDNgametoPDNHTMLstring(PDNgame *game, char *pdnstring);
int		PDNgametostartposition(PDNgame *game, int b[64]);
int		saveashtml(char *filename, PDNgame *PDNgame);
int		stripquotes(char *str, char *stripped);
void	install_gifs(void);
void	copy_file(char *srcdir, char *fname);

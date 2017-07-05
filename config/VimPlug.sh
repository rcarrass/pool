cp VimPlug.sh ~/
cd ~/
sh VimPlug.sh
#vim plug
url -fLo ~/.vim/autoload/plug.vim --create-dirs \
	    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim

echo 'VimPlug installed\n'

set mouse=a
set number
set ruler
set showcmd
syntax on 
hi Normal ctermbg=none
set background=dark
set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab

call plug#begin('~/.vim/plugged')
Plug 'https://github.com/vim-syntastic/syntastic.git' 
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes' 
Plug 'scrooloose/nerdtree' 
Plug 'Xuyuanp/nerdtree-git-plugin' 
Plug 'https://github.com/vim-scripts/Conque-Shell.git'
Plug 'morhetz/gruvbox' 
Plug 'chriskempson/base16-vim' 
Plug 'jacoborus/tender.vim' 
call plug#end()

autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
map <C-n> :NERDTreeToggle<CR>

# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH=/Users/recarras/.oh-my-zsh
export MAIL=rcarrass42@gmail.com

ZSH_THEME="af-magic"
plugins=(git)

source $ZSH/oh-my-zsh.sh

#Shell
alias ls='clear && ls'
alias l='ls -l'
alias c='clear'
alias rl='source ~/.zshrc'
alias zshrc='vim ~/.zshrc'
alias vimrc='vim ~/.vimrc'

#Git
alias ga='git add'
alias gc='git commit -m'
alias gp='git push'
alias gs='git status'
alias gm='git merge'

#Compil
alias gccA='gcc -Wall -Wextra -Werror'

#Norminette
alias norm='norminette -R CheckForbiddenSourceHeader'

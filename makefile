# ターゲット名：ソースファイル
# [Tab] コマンド
hello: EXP39-C-3.c
	gcc -o hello EXP39-C-3.c

# 生成ファイルの削除
clean:
	rm -f *~ hello

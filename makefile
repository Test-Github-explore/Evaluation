# ターゲット名：ソースファイル
# [Tab] コマンド
hello: EXP34-C-2.c
	gcc -o hello EXP34-C-2.c

# 生成ファイルの削除
clean:
	rm -f *~ hello

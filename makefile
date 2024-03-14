# ターゲット名：ソースファイル
# [Tab] コマンド
hello: FIO30-C-2.c
	gcc -o hello FIO30-C-2.c

# 生成ファイルの削除
clean:
	rm -f *~ hello

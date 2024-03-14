# ターゲット名：ソースファイル
# [Tab] コマンド
hello: ARR30-C-2.c
	gcc -o hello ARR30-C-2.c

# 生成ファイルの削除
clean:
	rm -f *~ hello

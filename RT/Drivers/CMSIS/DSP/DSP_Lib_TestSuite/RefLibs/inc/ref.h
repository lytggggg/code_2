?? 
 # i f n d e f   _ R E F _ H  
 # d e f i n e   _ R E F _ H  
  
 # i n c l u d e   < m a t h . h >  
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 # i f d e f 	 _ _ c p l u s p l u s  
 e x t e r n   " C "  
 {  
 # e n d i f  
  
 # i f n d e f   P I  
 # d e f i n e   P I 	 	 	 	 	 3 . 1 4 1 5 9 2 6 5 3 5 8 9 7 9 f  
 # e n d i f  
  
     / * *  
       *   @ b r i e f   8 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 7   f o r m a t .  
       * /  
 / /     t y p e d e f   i n t 8 _ t   q 7 _ t ;  
  
     / * *  
       *   @ b r i e f   1 6 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 1 5   f o r m a t .  
       * /  
 / /     t y p e d e f   i n t 1 6 _ t   q 1 5 _ t ;  
  
     / * *  
       *   @ b r i e f   3 2 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 3 1   f o r m a t .  
       * /  
 / /     t y p e d e f   i n t 3 2 _ t   q 3 1 _ t ;  
  
     / * *  
       *   @ b r i e f   6 4 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 6 3   f o r m a t .  
       * /  
 / /     t y p e d e f   i n t 6 4 _ t   q 6 3 _ t ;  
  
     / * *  
       *   @ b r i e f   3 2 - b i t   f l o a t i n g - p o i n t   t y p e   d e f i n i t i o n .  
       * /  
 / /     t y p e d e f   f l o a t   f l o a t 3 2 _ t ;  
  
     / * *  
       *   @ b r i e f   6 4 - b i t   f l o a t i n g - p o i n t   t y p e   d e f i n i t i o n .  
       * /  
 / /     t y p e d e f   d o u b l e   f l o a t 6 4 _ t ;  
  
  
     / * *  
       *   @ b r i e f   E r r o r   s t a t u s   r e t u r n e d   b y   s o m e   f u n c t i o n s   i n   t h e   l i b r a r y .  
       * /  
  
     t y p e d e f   e n u m  
     {  
         R E F _ Q 7   =   0 ,  
         R E F _ Q 1 5 ,  
         R E F _ Q 3 1 ,  
         R E F _ F 3 2 ,  
     }   d a t a T y p e ;  
  
  
 # d e f i n e   F L T _ M A X     3 . 4 0 2 8 2 3 4 7 e + 3 8 F  
 # d e f i n e   D B L _ M A X     1 . 7 9 7 6 9 3 1 3 4 8 6 2 3 1 5 7 1 e + 3 0 8  
  
 # d e f i n e   F L T _ M I N     1 . 1 7 5 4 9 4 3 5 1 e - 3 8 F  
 # d e f i n e   D B L _ M I N     2 . 2 2 5 0 7 3 8 5 8 5 0 7 2 0 1 3 8 e - 3 0 8  
  
 # d e f i n e   S C H A R _ M I N   ( - 1 2 8 )  
         / *   m i m i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   s i g n e d   c h a r   * /  
 # d e f i n e   S C H A R _ M A X   1 2 7  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   s i g n e d   c h a r   * /  
 # d e f i n e   U C H A R _ M A X   2 5 5  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   u n s i g n e d   c h a r   * /  
 # d e f i n e   S H R T _ M I N     ( - 0 x 8 0 0 0 )  
         / *   m i n i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   s h o r t   i n t   * /  
 # d e f i n e   S H R T _ M A X     0 x 7 f f f  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   s h o r t   i n t   * /  
 # d e f i n e   U S H R T _ M A X   6 5 5 3 5  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   u n s i g n e d   s h o r t   i n t   * /  
 # d e f i n e   I N T _ M I N       ( ~ 0 x 7 f f f f f f f )     / *   - 2 1 4 7 4 8 3 6 4 8   a n d   0 x 8 0 0 0 0 0 0 0   a r e   u n s i g n e d   * /  
         / *   m i n i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   i n t   * /  
 # d e f i n e   I N T _ M A X       0 x 7 f f f f f f f  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   i n t   * /  
 # d e f i n e   U I N T _ M A X     0 x f f f f f f f f U  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   u n s i g n e d   i n t   * /  
 # d e f i n e   L O N G _ M I N     ( ~ 0 x 7 f f f f f f f L )  
         / *   m i n i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   l o n g   i n t   * /  
 # d e f i n e   L O N G _ M A X     0 x 7 f f f f f f f L  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   l o n g   i n t   * /  
 # d e f i n e   U L O N G _ M A X   0 x f f f f f f f f U L  
         / *   m a x i m u m   v a l u e   f o r   a n   o b j e c t   o f   t y p e   u n s i g n e d   l o n g   i n t   * /  
  
 	 / *  
 	   *   R e f   L i b   G l o b a l   V a r i a b l e s  
 	   * /  
 e x t e r n   f l o a t 3 2 _ t   s c r a t c h A r r a y [ ] ;  
 e x t e r n   a r m _ c f f t _ i n s t a n c e _ f 3 2   r e f _ c f f t _ s R _ f 3 2 _ l e n 8 1 9 2 ;  
  
 	 / *  
 	   *   R e f   L i b   F u n c t i o n s  
 	   * /  
  
 	 / *  
 	   *   H e l p e r   F u n c t i o n s  
 	   * /  
 q 3 1 _ t   r e f _ s a t _ n ( q 3 1 _ t   n u m ,   u i n t 3 2 _ t   b i t s ) ;  
  
 q 3 1 _ t   r e f _ s a t _ q 3 1 ( q 6 3 _ t   n u m ) ;  
  
 q 1 5 _ t   r e f _ s a t _ q 1 5 ( q 3 1 _ t   n u m ) ;  
  
 q 7 _ t   r e f _ s a t _ q 7 ( q 1 5 _ t   n u m ) ;  
  
 f l o a t 3 2 _ t   r e f _ p o w ( f l o a t 3 2 _ t   a ,   u i n t 3 2 _ t   b ) ;  
  
 e x t e r n   f l o a t 3 2 _ t   t e m p M a t r i x A r r a y [ ] ;  
  
 f l o a t 3 2 _ t   r e f _ d e t r m ( f l o a t 3 2 _ t   * p S r c ,   f l o a t 3 2 _ t   * t e m p ,   u i n t 3 2 _ t   s i z e ) ;  
  
 v o i d   r e f _ c o f a c t ( f l o a t 3 2 _ t   * p S r c ,   f l o a t 3 2 _ t   * p D s t ,   f l o a t 3 2 _ t   * t e m p ,   u i n t 3 2 _ t   s i z e ) ;  
  
 f l o a t 6 4 _ t   r e f _ d e t r m 6 4 ( f l o a t 6 4 _ t   * p S r c ,   f l o a t 6 4 _ t   * t e m p ,   u i n t 3 2 _ t   s i z e ) ;  
  
 v o i d   r e f _ c o f a c t 6 4 ( f l o a t 6 4 _ t   * p S r c ,   f l o a t 6 4 _ t   * p D s t ,   f l o a t 6 4 _ t   * t e m p ,   u i n t 3 2 _ t   s i z e ) ;  
  
 	 / *  
 	   *   B a s i c   M a t h   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ a b s _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a b s _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a b s _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a b s _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a d d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a d d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a d d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ a d d _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ d o t _ p r o d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   r e s u l t ) ;  
  
 v o i d   r e f _ d o t _ p r o d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   r e s u l t ) ;  
  
 v o i d   r e f _ d o t _ p r o d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   r e s u l t ) ;  
  
 v o i d   r e f _ d o t _ p r o d _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   r e s u l t ) ;  
  
 v o i d   r e f _ m u l t _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ m u l t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ m u l t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ m u l t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ n e g a t e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ n e g a t e _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ n e g a t e _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ n e g a t e _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ o f f s e t _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   o f f s e t ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ o f f s e t _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   o f f s e t ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ o f f s e t _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   o f f s e t ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ o f f s e t _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   o f f s e t ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s c a l e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   s c a l e ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s c a l e _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s c a l e _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s c a l e _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s h i f t _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s h i f t _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s h i f t _ q 7 (  
     q 7 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s u b _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s u b _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s u b _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ s u b _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 	 / *  
 	   *   C o m p l e x   M a t h   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ c m p l x _ c o n j _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ c o n j _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ c o n j _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ d o t _ p r o d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     f l o a t 3 2 _ t   *   r e a l R e s u l t ,  
     f l o a t 3 2 _ t   *   i m a g R e s u l t ) ;  
  
 v o i d   r e f _ c m p l x _ d o t _ p r o d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     q 6 3 _ t   *   r e a l R e s u l t ,  
     q 6 3 _ t   *   i m a g R e s u l t ) ;  
  
 v o i d   r e f _ c m p l x _ d o t _ p r o d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     q 3 1 _ t   *   r e a l R e s u l t ,  
     q 3 1 _ t   *   i m a g R e s u l t ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ s q u a r e d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ s q u a r e d _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m a g _ s q u a r e d _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ c m p l x _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ c m p l x _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ c m p l x _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ r e a l _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c C m p l x ,  
     f l o a t 3 2 _ t   *   p S r c R e a l ,  
     f l o a t 3 2 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ r e a l _ q 3 1 (  
     q 3 1 _ t   *   p S r c C m p l x ,  
     q 3 1 _ t   *   p S r c R e a l ,  
     q 3 1 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 v o i d   r e f _ c m p l x _ m u l t _ r e a l _ q 1 5 (  
     q 1 5 _ t   *   p S r c C m p l x ,  
     q 1 5 _ t   *   p S r c R e a l ,  
     q 1 5 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
 	 / *  
 	   *   C o n t r o l l e r   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ s i n _ c o s _ f 3 2 (  
     f l o a t 3 2 _ t   t h e t a ,  
     f l o a t 3 2 _ t   *   p S i n V a l ,  
     f l o a t 3 2 _ t   *   p C o s V a l ) ;  
  
 v o i d   r e f _ s i n _ c o s _ q 3 1 (  
     q 3 1 _ t   t h e t a ,  
     q 3 1 _ t   *   p S i n V a l ,  
     q 3 1 _ t   *   p C o s V a l ) ;  
  
 f l o a t 3 2 _ t   r e f _ p i d _ f 3 2 (  
 	 a r m _ p i d _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   i n ) ;  
  
 q 3 1 _ t   r e f _ p i d _ q 3 1 (  
 	 a r m _ p i d _ i n s t a n c e _ q 3 1   *   S ,  
 	 q 3 1 _ t   i n ) ;  
  
 q 1 5 _ t   r e f _ p i d _ q 1 5 (  
 	 a r m _ p i d _ i n s t a n c e _ q 1 5   *   S ,  
 	 q 1 5 _ t   i n ) ;  
  
 	 / *  
 	   *   F a s t   M a t h   F u n c t i o n s  
 	   * /  
 # d e f i n e   r e f _ s i n _ f 3 2 ( a )   s i n f ( a )  
  
 q 3 1 _ t   r e f _ s i n _ q 3 1 ( q 3 1 _ t   x ) ;  
  
 q 1 5 _ t   r e f _ s i n _ q 1 5 ( q 1 5 _ t   x ) ;  
  
 # d e f i n e   r e f _ c o s _ f 3 2 ( a )   c o s f ( a )  
  
 q 3 1 _ t   r e f _ c o s _ q 3 1 ( q 3 1 _ t   x ) ;  
  
 q 1 5 _ t   r e f _ c o s _ q 1 5 ( q 1 5 _ t   x ) ;  
  
 a r m _ s t a t u s   r e f _ s q r t _ q 3 1 ( q 3 1 _ t   i n ,   q 3 1 _ t   *   p O u t ) ;  
  
 a r m _ s t a t u s   r e f _ s q r t _ q 1 5 ( q 1 5 _ t   i n ,   q 1 5 _ t   *   p O u t ) ;  
  
 	 / *  
 	   *   F i l t e r i n g   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 2 T _ f 3 2 (  
 	 c o n s t   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ,  
 	 f l o a t 3 2 _ t   *   p D s t ,  
 	 u i n t 3 2 _ t   b l o c k S i z e ) ;  
 	  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ f 3 2 (  
 	 c o n s t   a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ,  
 	 f l o a t 3 2 _ t   *   p D s t ,  
 	 u i n t 3 2 _ t   b l o c k S i z e ) ;  
 	  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 2 T _ f 6 4 (  
 	 c o n s t   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 6 4   *   S ,  
 	 f l o a t 6 4 _ t   *   p S r c ,  
 	 f l o a t 6 4 _ t   *   p D s t ,  
 	 u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 1 _ f 3 2 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
      
 v o i d   r e f _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 1 _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 1 _ f a s t _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 1 _ f a s t _ q 1 5 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ b i q u a d _ c a s c a d e _ d f 1 _ q 1 5 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ c o n v _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   	 	 s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   	 	 s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
 v o i d   r e f _ c o n v _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ c o n v _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
 v o i d   r e f _ c o n v _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
 # d e f i n e   r e f _ c o n v _ o p t _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,     \  
                                                   p S c r a t c h 1 ,   p S c r a t c h 2 )                                     \  
         r e f _ c o n v _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t )  
  
 v o i d   r e f _ c o n v _ f a s t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
      
 v o i d   r e f _ c o n v _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
 # d e f i n e   r e f _ c o n v _ p a r t i a l _ o p t _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,     \  
                                                                   f i r s t I n d e x ,   n u m P o i n t s ,                                   \  
                                                                   p S c r a t c h 1 ,   p S c r a t c h 2 )                                     \  
         r e f _ c o n v _ p a r t i a l _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,                     \  
                                                   f i r s t I n d e x ,   n u m P o i n t s )  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ f a s t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
      
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
 v o i d   r e f _ c o n v _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ) ;  
  
 # d e f i n e   r e f _ c o n v _ o p t _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,       \  
                                                 p S c r a t c h 1 ,   p S c r a t c h 2 )                                       \  
         r e f _ c o n v _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t )  
  
 a r m _ s t a t u s   r e f _ c o n v _ p a r t i a l _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
 # d e f i n e   r e f _ c o n v _ p a r t i a l _ o p t _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,       \  
                                                                 f i r s t I n d e x ,   n u m P o i n t s ,                                     \  
                                                                 p S c r a t c h 1 ,   p S c r a t c h 2 )                                       \  
         r e f _ c o n v _ p a r t i a l _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,                       \  
                                                 f i r s t I n d e x ,   n u m P o i n t s )  
  
 v o i d   r e f _ c o r r e l a t e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ c o r r e l a t e _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ c o r r e l a t e _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ c o r r e l a t e _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
 # d e f i n e   r e f _ c o r r e l a t e _ o p t _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,     \  
                                                   p S c r a t c h 1 )                                                                     \  
         r e f _ c o r r e l a t e _ q 1 5 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t )  
  
 v o i d   r e f _ c o r r e l a t e _ f a s t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ c o r r e l a t e _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h ) ;  
          
 v o i d   r e f _ c o r r e l a t e _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ) ;  
  
 # d e f i n e   r e f _ c o r r e l a t e _ o p t _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t ,       \  
                                                 p S c r a t c h 1 ,   p S c r a t c h 2 )                                                 \  
         r e f _ c o r r e l a t e _ q 7 ( p S r c A ,   s r c A L e n ,   p S r c B ,   s r c B L e n ,   p D s t )  
  
 v o i d   r e f _ f i r _ f 3 2 (  
 	 c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ,  
 	 f l o a t 3 2 _ t   *   p D s t ,  
 	 u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ q 7 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ l a t t i c e _ q 1 5 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ s p a r s e _ f 3 2 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     f l o a t 3 2 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 3 1 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     q 3 1 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 1 5 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 7 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   * p S r c ,  
     q 7 _ t   * p D s t ,  
     q 7 _ t   * p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ i i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ i i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ i i r _ l a t t i c e _ q 1 5 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ f 3 2 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p R e f ,  
     f l o a t 3 2 _ t   *   p O u t ,  
     f l o a t 3 2 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ n o r m _ f 3 2 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p R e f ,  
     f l o a t 3 2 _ t   *   p O u t ,  
     f l o a t 3 2 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ q 3 1 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p R e f ,  
     q 3 1 _ t   *   p O u t ,  
     q 3 1 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ n o r m _ q 3 1 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p R e f ,  
     q 3 1 _ t   *   p O u t ,  
     q 3 1 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ q 1 5 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p R e f ,  
     q 1 5 _ t   *   p O u t ,  
     q 1 5 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ l m s _ n o r m _ q 1 5 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p R e f ,  
     q 1 5 _ t   *   p O u t ,  
     q 1 5 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 	 / *  
 	   *   M a t r i x   F u n c t i o n s  
 	   * /  
 a r m _ s t a t u s   r e f _ m a t _ c m p l x _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ c m p l x _ m u l t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ c m p l x _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ i n v e r s e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ i n v e r s e _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 / *   A l i a s   f o r   t e s t i n g   p u r p o s e s * /  
 # d e f i n e   r e f _ m a t _ m u l t _ f a s t _ q 3 1   r e f _ m a t _ m u l t _ q 3 1  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 / *   A l i a s   f o r   t e s t i n g   p u r p o s e s * /  
 # d e f i n e   r e f _ m a t _ m u l t _ f a s t _ q 1 5   r e f _ m a t _ m u l t _ q 1 5  
  
 a r m _ s t a t u s   r e f _ m a t _ s c a l e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     f l o a t 3 2 _ t   s c a l e ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ s c a l e _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     q 3 1 _ t   s c a l e ,  
     i n t 3 2 _ t   s h i f t ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ s c a l e _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c ,  
     q 1 5 _ t   s c a l e ,  
     i n t 3 2 _ t   s h i f t ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ s u b _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ s u b _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ s u b _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
 	 / *  
 	   *   S t a t i s t i c s   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ m a x _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m a x _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m a x _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m a x _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m e a n _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ m e a n _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ m e a n _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ m e a n _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ m i n _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m i n _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m i n _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ m i n _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
 v o i d   r e f _ p o w e r _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ p o w e r _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ p o w e r _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ p o w e r _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ r m s _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ r m s _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ r m s _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ s t d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ s t d _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ s t d _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ v a r _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ v a r _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
 v o i d   r e f _ v a r _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
 	 / *  
 	   *   S u p p o r t   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ c o p y _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ c o p y _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ c o p y _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ c o p y _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i l l _ f 3 2 (  
     f l o a t 3 2 _ t   v a l u e ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i l l _ q 3 1 (  
     q 3 1 _ t   v a l u e ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i l l _ q 1 5 (  
     q 1 5 _ t   v a l u e ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f i l l _ q 7 (  
     q 7 _ t   v a l u e ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 3 1 _ t o _ q 1 5 (  
     q 3 1 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 3 1 _ t o _ q 7 (  
     q 3 1 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 1 5 _ t o _ q 3 1 (  
     q 1 5 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 1 5 _ t o _ q 7 (  
     q 1 5 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 7 _ t o _ q 3 1 (  
     q 7 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 7 _ t o _ q 1 5 (  
     q 7 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 6 3 _ t o _ f l o a t (  
     q 6 3 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 3 1 _ t o _ f l o a t (  
     q 3 1 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 1 5 _ t o _ f l o a t (  
     q 1 5 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ q 7 _ t o _ f l o a t (  
     q 7 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f l o a t _ t o _ q 3 1 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f l o a t _ t o _ q 1 5 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 v o i d   r e f _ f l o a t _ t o _ q 7 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 	 / *  
 	   *   T r a n s f o r m   F u n c t i o n s  
 	   * /  
 v o i d   r e f _ c f f t _ f 3 2 (  
       c o n s t   a r m _ c f f t _ i n s t a n c e _ f 3 2   *   S ,  
       f l o a t 3 2 _ t   *   p 1 ,  
       u i n t 8 _ t   i f f t F l a g ,  
       u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
 	    
 v o i d   r e f _ c f f t _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ i n s t a n c e _ q 3 1   *   S ,  
         q 3 1 _ t   *   p 1 ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
 	    
 v o i d   r e f _ c f f t _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ i n s t a n c e _ q 1 5   *   S ,  
         q 1 5 _ t   *   p 1 ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ f 3 2 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
 	 q 3 1 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 1 5   *   S ,  
 	 q 1 5 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ f 3 2 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   *   S ,  
 	 q 3 1 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   *   S ,  
 	 q 1 5 _ t   *   p S r c ) ;  
  
 v o i d   r e f _ r f f t _ f 3 2 (  
 	 a r m _ r f f t _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ r f f t _ f a s t _ f 3 2 (  
 	 a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p ,   f l o a t 3 2 _ t   *   p O u t ,  
 	 u i n t 8 _ t   i f f t F l a g ) ;  
  
 v o i d   r e f _ r f f t _ q 3 1 (  
     c o n s t   a r m _ r f f t _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ r f f t _ q 1 5 (  
     c o n s t   a r m _ r f f t _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ) ;  
  
 v o i d   r e f _ d c t 4 _ f 3 2 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     f l o a t 3 2 _ t   *   p I n l i n e B u f f e r ) ;  
  
 v o i d   r e f _ d c t 4 _ q 3 1 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S t a t e ,  
     q 3 1 _ t   *   p I n l i n e B u f f e r ) ;  
  
 v o i d   r e f _ d c t 4 _ q 1 5 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S t a t e ,  
     q 1 5 _ t   *   p I n l i n e B u f f e r ) ;  
  
 	 / *  
 	   *   I n t r i n s i c s  
 	   * /  
 q 3 1 _ t   r e f _ _ Q A D D 8 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q S U B 8 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q A D D 1 6 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S H A D D 1 6 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q S U B 1 6 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S H S U B 1 6 ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q A S X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S H A S X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q S A X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S H S A X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S M U S D X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S M U A D X ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q A D D ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ Q S U B ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S M L A D ( q 3 1 _ t   x ,   q 3 1 _ t   y ,   q 3 1 _ t   s u m ) ;  
 q 3 1 _ t   r e f _ _ S M L A D X ( q 3 1 _ t   x ,   q 3 1 _ t   y ,   q 3 1 _ t   s u m ) ;  
 q 3 1 _ t   r e f _ _ S M L S D X ( q 3 1 _ t   x ,   q 3 1 _ t   y ,   q 3 1 _ t   s u m ) ;  
 q 6 3 _ t   r e f _ _ S M L A L D ( q 3 1 _ t   x ,   q 3 1 _ t   y ,   q 6 3 _ t   s u m ) ;  
 q 6 3 _ t   r e f _ _ S M L A L D X ( q 3 1 _ t   x ,   q 3 1 _ t   y ,   q 6 3 _ t   s u m ) ;  
 q 3 1 _ t   r e f _ _ S M U A D ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S M U S D ( q 3 1 _ t   x ,   q 3 1 _ t   y ) ;  
 q 3 1 _ t   r e f _ _ S X T B 1 6 ( q 3 1 _ t   x ) ;  
  
 # i f d e f 	 _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f  
??/ *   F i l e :   s t a r t u p _ a r m v 7 - m . S  
   *   P u r p o s e :   s t a r t u p   f i l e   f o r   a r m v 7 - m   a r c h i t e c t u r e   d e v i c e s .  
   *                     S h o u l d   b e   u s e d   w i t h   G C C   f o r   A R M   E m b e d d e d   P r o c e s s o r s  
   *   V e r s i o n :   V 2 . 0 0  
   *   D a t e :   1 6   N o v e m b e r   2 0 1 5  
   *  
   * /  
 / *   C o p y r i g h t   ( c )   2 0 1 1   -   2 0 1 5   A R M   L I M I T E D  
  
       A l l   r i g h t s   r e s e r v e d .  
       R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
       m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s   a r e   m e t :  
       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n   t h e  
           d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e   d i s t r i b u t i o n .  
       -   N e i t h e r   t h e   n a m e   o f   A R M   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s   m a y   b e   u s e d  
           t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s   s o f t w a r e   w i t h o u t  
           s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
       *  
       T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S   " A S   I S "  
       A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   T H E  
       I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E  
       A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S   B E  
       L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R  
       C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F  
       S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S  
       I N T E R R U P T I O N )   H O W E V E R   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N  
       C O N T R A C T ,   S T R I C T   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )  
       A R I S I N G   I N   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
       P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
  
 	 . s y n t a x 	 u n i f i e d  
 	 . a r c h 	 a r m v 7 - m  
  
 	 . s e c t i o n   . s t a c k  
 	 . a l i g n 	 3  
 # i f d e f   _ _ S T A C K _ S I Z E  
 	 . e q u 	 S t a c k _ S i z e ,   _ _ S T A C K _ S I Z E  
 # e l s e  
 	 . e q u 	 S t a c k _ S i z e ,   0 x 0 0 0 0 0 4 0 0  
 # e n d i f  
 	 . g l o b l 	 _ _ S t a c k T o p  
 	 . g l o b l 	 _ _ S t a c k L i m i t  
 _ _ S t a c k L i m i t :  
 	 . s p a c e 	 S t a c k _ S i z e  
 	 . s i z e 	 _ _ S t a c k L i m i t ,   .   -   _ _ S t a c k L i m i t  
 _ _ S t a c k T o p :  
 	 . s i z e 	 _ _ S t a c k T o p ,   .   -   _ _ S t a c k T o p  
  
 	 . s e c t i o n   . h e a p  
 	 . a l i g n 	 3  
 # i f d e f   _ _ H E A P _ S I Z E  
 	 . e q u 	 H e a p _ S i z e ,   _ _ H E A P _ S I Z E  
 # e l s e  
 	 . e q u 	 H e a p _ S i z e ,   0 x 0 0 0 0 0 C 0 0  
 # e n d i f  
 	 . g l o b l 	 _ _ H e a p B a s e  
 	 . g l o b l 	 _ _ H e a p L i m i t  
 _ _ H e a p B a s e :  
 	 . i f 	 H e a p _ S i z e  
 	 . s p a c e 	 H e a p _ S i z e  
 	 . e n d i f  
 	 . s i z e 	 _ _ H e a p B a s e ,   .   -   _ _ H e a p B a s e  
 _ _ H e a p L i m i t :  
 	 . s i z e 	 _ _ H e a p L i m i t ,   .   -   _ _ H e a p L i m i t  
  
 	 . s e c t i o n   . v e c t o r s  
 	 . a l i g n 	 2  
 	 . g l o b l 	 _ _ V e c t o r s  
 _ _ V e c t o r s :  
 	 . l o n g 	 _ _ S t a c k T o p                         / *   T o p   o f   S t a c k   * /  
 	 . l o n g 	 R e s e t _ H a n d l e r                   / *   R e s e t   H a n d l e r   * /  
 	 . l o n g 	 N M I _ H a n d l e r                       / *   N M I   H a n d l e r   * /  
 	 . l o n g 	 H a r d F a u l t _ H a n d l e r           / *   H a r d   F a u l t   H a n d l e r   * /  
 	 . l o n g 	 M e m M a n a g e _ H a n d l e r           / *   M P U   F a u l t   H a n d l e r   * /  
 	 . l o n g 	 B u s F a u l t _ H a n d l e r             / *   B u s   F a u l t   H a n d l e r   * /  
 	 . l o n g 	 U s a g e F a u l t _ H a n d l e r         / *   U s a g e   F a u l t   H a n d l e r   * /  
 	 . l o n g 	 0                                           / *   R e s e r v e d   * /  
 	 . l o n g 	 0                                           / *   R e s e r v e d   * /  
 	 . l o n g 	 0                                           / *   R e s e r v e d   * /  
 	 . l o n g 	 0                                           / *   R e s e r v e d   * /  
 	 . l o n g 	 S V C _ H a n d l e r                       / *   S V C a l l   H a n d l e r   * /  
 	 . l o n g 	 D e b u g M o n _ H a n d l e r             / *   D e b u g   M o n i t o r   H a n d l e r   * /  
 	 . l o n g 	 0                                           / *   R e s e r v e d   * /  
 	 . l o n g 	 P e n d S V _ H a n d l e r                 / *   P e n d S V   H a n d l e r   * /  
 	 . l o n g 	 S y s T i c k _ H a n d l e r               / *   S y s T i c k   H a n d l e r   * /  
  
 	 . s i z e 	 _ _ V e c t o r s ,   .   -   _ _ V e c t o r s  
  
 	 . t e x t  
 	 . t h u m b  
 	 . t h u m b _ f u n c  
 	 . a l i g n 	 2  
 	 . g l o b l 	 R e s e t _ H a n d l e r  
 	 . t y p e 	 R e s e t _ H a n d l e r ,   % f u n c t i o n  
 R e s e t _ H a n d l e r :  
 / *     F i r s t l y   i t   c o p i e s   d a t a   f r o m   r e a d   o n l y   m e m o r y   t o   R A M .   T h e r e   a r e   t w o   s c h e m e s  
   *     t o   c o p y .   O n e   c a n   c o p y   m o r e   t h a n   o n e   s e c t i o n s .   A n o t h e r   c a n   o n l y   c o p y  
   *     o n e   s e c t i o n .     T h e   f o r m e r   s c h e m e   n e e d s   m o r e   i n s t r u c t i o n s   a n d   r e a d - o n l y  
   *     d a t a   t o   i m p l e m e n t   t h a n   t h e   l a t t e r .  
   *     M a c r o   _ _ S T A R T U P _ C O P Y _ M U L T I P L E   i s   u s e d   t o   c h o o s e   b e t w e e n   t w o   s c h e m e s .     * /  
  
 # i f d e f   _ _ S T A R T U P _ C O P Y _ M U L T I P L E  
 / *     M u l t i p l e   s e c t i o n s   s c h e m e .  
   *  
   *     B e t w e e n   s y m b o l   a d d r e s s   _ _ c o p y _ t a b l e _ s t a r t _ _   a n d   _ _ c o p y _ t a b l e _ e n d _ _ ,  
   *     t h e r e   a r e   a r r a y   o f   t r i p l e t s ,   e a c h   o f   w h i c h   s p e c i f y :  
   *         o f f s e t   0 :   L M A   o f   s t a r t   o f   a   s e c t i o n   t o   c o p y   f r o m  
   *         o f f s e t   4 :   V M A   o f   s t a r t   o f   a   s e c t i o n   t o   c o p y   t o  
   *         o f f s e t   8 :   s i z e   o f   t h e   s e c t i o n   t o   c o p y .   M u s t   b e   m u l t i p l y   o f   4  
   *  
   *     A l l   a d d r e s s e s   m u s t   b e   a l i g n e d   t o   4   b y t e s   b o u n d a r y .  
   * /  
 	 l d r 	 r 4 ,   = _ _ c o p y _ t a b l e _ s t a r t _ _  
 	 l d r 	 r 5 ,   = _ _ c o p y _ t a b l e _ e n d _ _  
  
 . L _ l o o p 0 :  
 	 c m p 	 r 4 ,   r 5  
 	 b g e 	 . L _ l o o p 0 _ d o n e  
 	 l d r 	 r 1 ,   [ r 4 ]  
 	 l d r 	 r 2 ,   [ r 4 ,   # 4 ]  
 	 l d r 	 r 3 ,   [ r 4 ,   # 8 ]  
  
 . L _ l o o p 0 _ 0 :  
 	 s u b s 	 r 3 ,   # 4  
 	 i t t t 	 g e  
 	 l d r g e 	 r 0 ,   [ r 1 ,   r 3 ]  
 	 s t r g e 	 r 0 ,   [ r 2 ,   r 3 ]  
 	 b g e 	 . L _ l o o p 0 _ 0  
  
 	 a d d s 	 r 4 ,   # 1 2  
 	 b 	 . L _ l o o p 0  
  
 . L _ l o o p 0 _ d o n e :  
 # e l s e  
 / *     S i n g l e   s e c t i o n   s c h e m e .  
   *  
   *     T h e   r a n g e s   o f   c o p y   f r o m / t o   a r e   s p e c i f i e d   b y   f o l l o w i n g   s y m b o l s  
   *         _ _ e t e x t :   L M A   o f   s t a r t   o f   t h e   s e c t i o n   t o   c o p y   f r o m .   U s u a l l y   e n d   o f   t e x t  
   *         _ _ d a t a _ s t a r t _ _ :   V M A   o f   s t a r t   o f   t h e   s e c t i o n   t o   c o p y   t o  
   *         _ _ d a t a _ e n d _ _ :   V M A   o f   e n d   o f   t h e   s e c t i o n   t o   c o p y   t o  
   *  
   *     A l l   a d d r e s s e s   m u s t   b e   a l i g n e d   t o   4   b y t e s   b o u n d a r y .  
   * /  
 	 l d r 	 r 1 ,   = _ _ e t e x t  
 	 l d r 	 r 2 ,   = _ _ d a t a _ s t a r t _ _  
 	 l d r 	 r 3 ,   = _ _ d a t a _ e n d _ _  
  
 . L _ l o o p 1 :  
 	 c m p 	 r 2 ,   r 3  
 	 i t t t 	 l t  
 	 l d r l t 	 r 0 ,   [ r 1 ] ,   # 4  
 	 s t r l t 	 r 0 ,   [ r 2 ] ,   # 4  
 	 b l t 	 . L _ l o o p 1  
 # e n d i f   / * _ _ S T A R T U P _ C O P Y _ M U L T I P L E   * /  
  
 / *     T h i s   p a r t   o f   w o r k   u s u a l l y   i s   d o n e   i n   C   l i b r a r y   s t a r t u p   c o d e .   O t h e r w i s e ,  
   *     d e f i n e   t h i s   m a c r o   t o   e n a b l e   i t   i n   t h i s   s t a r t u p .  
   *  
   *     T h e r e   a r e   t w o   s c h e m e s   t o o .   O n e   c a n   c l e a r   m u l t i p l e   B S S   s e c t i o n s .   A n o t h e r  
   *     c a n   o n l y   c l e a r   o n e   s e c t i o n .   T h e   f o r m e r   i s   m o r e   s i z e   e x p e n s i v e   t h a n   t h e  
   *     l a t t e r .  
   *  
   *     D e f i n e   m a c r o   _ _ S T A R T U P _ C L E A R _ B S S _ M U L T I P L E   t o   c h o o s e   t h e   f o r m e r .  
   *     O t h e r w i s e   e f i n e   m a c r o   _ _ S T A R T U P _ C L E A R _ B S S   t o   c h o o s e   t h e   l a t e r .  
   * /  
 # i f d e f   _ _ S T A R T U P _ C L E A R _ B S S _ M U L T I P L E  
 / *     M u l t i p l e   s e c t i o n s   s c h e m e .  
   *  
   *     B e t w e e n   s y m b o l   a d d r e s s   _ _ c o p y _ t a b l e _ s t a r t _ _   a n d   _ _ c o p y _ t a b l e _ e n d _ _ ,  
   *     t h e r e   a r e   a r r a y   o f   t u p l e s   s p e c i f y i n g :  
   *         o f f s e t   0 :   S t a r t   o f   a   B S S   s e c t i o n  
   *         o f f s e t   4 :   S i z e   o f   t h i s   B S S   s e c t i o n .   M u s t   b e   m u l t i p l y   o f   4  
   * /  
 	 l d r 	 r 3 ,   = _ _ z e r o _ t a b l e _ s t a r t _ _  
 	 l d r 	 r 4 ,   = _ _ z e r o _ t a b l e _ e n d _ _  
  
 . L _ l o o p 2 :  
 	 c m p 	 r 3 ,   r 4  
 	 b g e 	 . L _ l o o p 2 _ d o n e  
 	 l d r 	 r 1 ,   [ r 3 ]  
 	 l d r 	 r 2 ,   [ r 3 ,   # 4 ]  
 	 m o v s 	 r 0 ,   0  
  
 . L _ l o o p 2 _ 0 :  
 	 s u b s 	 r 2 ,   # 4  
 	 i t t 	 g e  
 	 s t r g e 	 r 0 ,   [ r 1 ,   r 2 ]  
 	 b g e 	 . L _ l o o p 2 _ 0  
  
 	 a d d s 	 r 3 ,   # 8  
 	 b 	 . L _ l o o p 2  
 . L _ l o o p 2 _ d o n e :  
 # e l i f   d e f i n e d   ( _ _ S T A R T U P _ C L E A R _ B S S )  
 / *     S i n g l e   B S S   s e c t i o n   s c h e m e .  
   *  
   *     T h e   B S S   s e c t i o n   i s   s p e c i f i e d   b y   f o l l o w i n g   s y m b o l s  
   *         _ _ b s s _ s t a r t _ _ :   s t a r t   o f   t h e   B S S   s e c t i o n .  
   *         _ _ b s s _ e n d _ _ :   e n d   o f   t h e   B S S   s e c t i o n .  
   *  
   *     B o t h   a d d r e s s e s   m u s t   b e   a l i g n e d   t o   4   b y t e s   b o u n d a r y .  
   * /  
 	 l d r 	 r 1 ,   = _ _ b s s _ s t a r t _ _  
 	 l d r 	 r 2 ,   = _ _ b s s _ e n d _ _  
  
 	 m o v s 	 r 0 ,   0  
 . L _ l o o p 3 :  
 	 c m p 	 r 1 ,   r 2  
 	 i t t 	 l t  
 	 s t r l t 	 r 0 ,   [ r 1 ] ,   # 4  
 	 b l t 	 . L _ l o o p 3  
 # e n d i f   / *   _ _ S T A R T U P _ C L E A R _ B S S _ M U L T I P L E   | |   _ _ S T A R T U P _ C L E A R _ B S S   * /  
  
 # i f n d e f   _ _ N O _ S Y S T E M _ I N I T  
 	 b l 	 S y s t e m I n i t  
 # e n d i f  
  
 # i f n d e f   _ _ S T A R T  
 # d e f i n e   _ _ S T A R T   _ s t a r t  
 # e n d i f  
 	 b l 	 _ _ S T A R T  
  
 	 . p o o l  
 	 . s i z e 	 R e s e t _ H a n d l e r ,   .   -   R e s e t _ H a n d l e r  
  
 	 . a l i g n 	 1  
 	 . t h u m b _ f u n c  
 	 . w e a k 	 D e f a u l t _ H a n d l e r  
 	 . t y p e 	 D e f a u l t _ H a n d l e r ,   % f u n c t i o n  
 D e f a u l t _ H a n d l e r :  
         b k p t   # 0  
 	 b 	 .  
 	 . s i z e 	 D e f a u l t _ H a n d l e r ,   .   -   D e f a u l t _ H a n d l e r  
  
 / *         M a c r o   t o   d e f i n e   d e f a u l t   h a n d l e r s .   D e f a u l t   h a n d l e r  
   *         w i l l   b e   w e a k   s y m b o l   a n d   j u s t   d e a d   l o o p s .   T h e y   c a n   b e  
   *         o v e r w r i t t e n   b y   o t h e r   h a n d l e r s   * /  
 	 . m a c r o 	 d e f _ i r q _ h a n d l e r 	 h a n d l e r _ n a m e  
 	 . w e a k 	 \ h a n d l e r _ n a m e  
 	 . s e t 	 \ h a n d l e r _ n a m e ,   D e f a u l t _ H a n d l e r  
 	 . e n d m  
  
 	 d e f _ i r q _ h a n d l e r 	 N M I _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 H a r d F a u l t _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 M e m M a n a g e _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 B u s F a u l t _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 U s a g e F a u l t _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 S V C _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 D e b u g M o n _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 P e n d S V _ H a n d l e r  
 	 d e f _ i r q _ h a n d l e r 	 S y s T i c k _ H a n d l e r  
  
 	 . e n d  
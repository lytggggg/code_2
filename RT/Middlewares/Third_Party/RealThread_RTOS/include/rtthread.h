??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 8           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 6           B e r n a r d             a d d   s e m a p h o r e   A P I s  
   *   2 0 0 6 - 0 8 - 1 0           B e r n a r d             a d d   v e r s i o n   i n f o r m a t i o n  
   *   2 0 0 7 - 0 1 - 2 8           B e r n a r d             r e n a m e   R T _ O B J E C T _ C l a s s _ S t a t i c   t o   R T _ O b j e c t _ C l a s s _ S t a t i c  
   *   2 0 0 7 - 0 3 - 0 3           B e r n a r d             c l e a n   u p   t h e   d e f i n i t i o n s   t o   r t d e f . h  
   *   2 0 1 0 - 0 4 - 1 1           y i . q i u               a d d   m o d u l e   f e a t u r e  
   *   2 0 1 3 - 0 6 - 2 4           B e r n a r d             a d d   r t _ k p r i n t f   r e - d e f i n e   w h e n   n o t   u s e   R T _ U S I N G _ C O N S O L E .  
   *   2 0 1 6 - 0 8 - 0 9           A r d a F u               a d d   n e w   t h r e a d   a n d   i n t e r r u p t   h o o k .  
   * /  
  
 # i f n d e f   _ _ R T _ T H R E A D _ H _ _  
 # d e f i n e   _ _ R T _ T H R E A D _ H _ _  
  
 # i n c l u d e   < r t c o n f i g . h >  
 # i n c l u d e   < r t d e b u g . h >  
 # i n c l u d e   < r t d e f . h >  
 # i n c l u d e   < r t s e r v i c e . h >  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   K e r n e l O b j e c t  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   k e r n e l   o b j e c t   i n t e r f a c e  
   * /  
 v o i d   r t _ s y s t e m _ o b j e c t _ i n i t ( v o i d ) ;  
 s t r u c t   r t _ o b j e c t _ i n f o r m a t i o n   *  
 r t _ o b j e c t _ g e t _ i n f o r m a t i o n ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ) ;  
 i n t   r t _ o b j e c t _ g e t _ l e n g t h ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ) ;  
 i n t   r t _ o b j e c t _ g e t _ p o i n t e r s ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,   r t _ o b j e c t _ t   * p o i n t e r s ,   i n t   m a x l e n ) ;  
  
 v o i d   r t _ o b j e c t _ i n i t ( s t r u c t   r t _ o b j e c t                   * o b j e c t ,  
                                         e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,  
                                         c o n s t   c h a r                               * n a m e ) ;  
 v o i d   r t _ o b j e c t _ d e t a c h ( r t _ o b j e c t _ t   o b j e c t ) ;  
 r t _ o b j e c t _ t   r t _ o b j e c t _ a l l o c a t e ( e n u m   r t _ o b j e c t _ c l a s s _ t y p e   t y p e ,  
                                                               c o n s t   c h a r                               * n a m e ) ;  
 v o i d   r t _ o b j e c t _ d e l e t e ( r t _ o b j e c t _ t   o b j e c t ) ;  
 r t _ b o o l _ t   r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( r t _ o b j e c t _ t   o b j e c t ) ;  
 r t _ u i n t 8 _ t   r t _ o b j e c t _ g e t _ t y p e ( r t _ o b j e c t _ t   o b j e c t ) ;  
 r t _ o b j e c t _ t   r t _ o b j e c t _ f i n d ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   t y p e ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ o b j e c t _ a t t a c h _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ) ;  
 v o i d   r t _ o b j e c t _ d e t a c h _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ) ;  
 v o i d   r t _ o b j e c t _ t r y t a k e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ) ;  
 v o i d   r t _ o b j e c t _ t a k e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ) ;  
 v o i d   r t _ o b j e c t _ p u t _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ) ;  
 # e n d i f  
  
 / * * @ } * /  
  
 / * *  
   *   @ a d d t o g r o u p   C l o c k  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   c l o c k   &   t i m e r   i n t e r f a c e  
   * /  
 v o i d   r t _ s y s t e m _ t i c k _ i n i t ( v o i d ) ;  
 r t _ t i c k _ t   r t _ t i c k _ g e t ( v o i d ) ;  
 v o i d   r t _ t i c k _ s e t ( r t _ t i c k _ t   t i c k ) ;  
 v o i d   r t _ t i c k _ i n c r e a s e ( v o i d ) ;  
 r t _ t i c k _ t     r t _ t i c k _ f r o m _ m i l l i s e c o n d ( r t _ i n t 3 2 _ t   m s ) ;  
  
 v o i d   r t _ s y s t e m _ t i m e r _ i n i t ( v o i d ) ;  
 v o i d   r t _ s y s t e m _ t i m e r _ t h r e a d _ i n i t ( v o i d ) ;  
  
 v o i d   r t _ t i m e r _ i n i t ( r t _ t i m e r _ t     t i m e r ,  
                                       c o n s t   c h a r   * n a m e ,  
                                       v o i d   ( * t i m e o u t ) ( v o i d   * p a r a m e t e r ) ,  
                                       v o i d               * p a r a m e t e r ,  
                                       r t _ t i c k _ t       t i m e ,  
                                       r t _ u i n t 8 _ t     f l a g ) ;  
 r t _ e r r _ t   r t _ t i m e r _ d e t a c h ( r t _ t i m e r _ t   t i m e r ) ;  
 r t _ t i m e r _ t   r t _ t i m e r _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                                       v o i d   ( * t i m e o u t ) ( v o i d   * p a r a m e t e r ) ,  
                                                       v o i d               * p a r a m e t e r ,  
                                                       r t _ t i c k _ t       t i m e ,  
                                                       r t _ u i n t 8 _ t     f l a g ) ;  
 r t _ e r r _ t   r t _ t i m e r _ d e l e t e ( r t _ t i m e r _ t   t i m e r ) ;  
 r t _ e r r _ t   r t _ t i m e r _ s t a r t ( r t _ t i m e r _ t   t i m e r ) ;  
 r t _ e r r _ t   r t _ t i m e r _ s t o p ( r t _ t i m e r _ t   t i m e r ) ;  
 r t _ e r r _ t   r t _ t i m e r _ c o n t r o l ( r t _ t i m e r _ t   t i m e r ,   i n t   c m d ,   v o i d   * a r g ) ;  
  
 r t _ t i c k _ t   r t _ t i m e r _ n e x t _ t i m e o u t _ t i c k ( v o i d ) ;  
 v o i d   r t _ t i m e r _ c h e c k ( v o i d ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ t i m e r _ e n t e r _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) ) ;  
 v o i d   r t _ t i m e r _ e x i t _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) ) ;  
 # e n d i f  
  
 / * * @ } * /  
  
 / * *  
   *   @ a d d t o g r o u p   T h r e a d  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   t h r e a d   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ i n i t ( s t r u c t   r t _ t h r e a d   * t h r e a d ,  
                                                 c o n s t   c h a r               * n a m e ,  
                                                 v o i d   ( * e n t r y ) ( v o i d   * p a r a m e t e r ) ,  
                                                 v o i d                           * p a r a m e t e r ,  
                                                 v o i d                           * s t a c k _ s t a r t ,  
                                                 r t _ u i n t 3 2 _ t               s t a c k _ s i z e ,  
                                                 r t _ u i n t 8 _ t                 p r i o r i t y ,  
                                                 r t _ u i n t 3 2 _ t               t i c k ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ d e t a c h ( r t _ t h r e a d _ t   t h r e a d ) ;  
 r t _ t h r e a d _ t   r t _ t h r e a d _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                                           v o i d   ( * e n t r y ) ( v o i d   * p a r a m e t e r ) ,  
                                                           v o i d               * p a r a m e t e r ,  
                                                           r t _ u i n t 3 2 _ t   s t a c k _ s i z e ,  
                                                           r t _ u i n t 8 _ t     p r i o r i t y ,  
                                                           r t _ u i n t 3 2 _ t   t i c k ) ;  
 r t _ t h r e a d _ t   r t _ t h r e a d _ s e l f ( v o i d ) ;  
 r t _ t h r e a d _ t   r t _ t h r e a d _ f i n d ( c h a r   * n a m e ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ s t a r t u p ( r t _ t h r e a d _ t   t h r e a d ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ d e l e t e ( r t _ t h r e a d _ t   t h r e a d ) ;  
  
 r t _ e r r _ t   r t _ t h r e a d _ y i e l d ( v o i d ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ d e l a y ( r t _ t i c k _ t   t i c k ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ d e l a y _ u n t i l ( r t _ t i c k _ t   * t i c k ,   r t _ t i c k _ t   i n c _ t i c k ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ m d e l a y ( r t _ i n t 3 2 _ t   m s ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ c o n t r o l ( r t _ t h r e a d _ t   t h r e a d ,   i n t   c m d ,   v o i d   * a r g ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ s u s p e n d ( r t _ t h r e a d _ t   t h r e a d ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ r e s u m e ( r t _ t h r e a d _ t   t h r e a d ) ;  
 v o i d   r t _ t h r e a d _ t i m e o u t ( v o i d   * p a r a m e t e r ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ t h r e a d _ s u s p e n d _ s e t h o o k ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) ) ;  
 v o i d   r t _ t h r e a d _ r e s u m e _ s e t h o o k   ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) ) ;  
 v o i d   r t _ t h r e a d _ i n i t e d _ s e t h o o k   ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) ) ;  
 # e n d i f  
  
 / *  
   *   i d l e   t h r e a d   i n t e r f a c e  
   * /  
 v o i d   r t _ t h r e a d _ i d l e _ i n i t ( v o i d ) ;  
 # i f   d e f i n e d ( R T _ U S I N G _ H O O K )   | |   d e f i n e d ( R T _ U S I N G _ I D L E _ H O O K )  
 r t _ e r r _ t   r t _ t h r e a d _ i d l e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) ) ;  
 r t _ e r r _ t   r t _ t h r e a d _ i d l e _ d e l h o o k ( v o i d   ( * h o o k ) ( v o i d ) ) ;  
 # e n d i f  
 v o i d   r t _ t h r e a d _ i d l e _ e x c u t e ( v o i d ) ;  
 r t _ t h r e a d _ t   r t _ t h r e a d _ i d l e _ g e t h a n d l e r ( v o i d ) ;  
  
 / *  
   *   s c h e d u l e   s e r v i c e  
   * /  
 v o i d   r t _ s y s t e m _ s c h e d u l e r _ i n i t ( v o i d ) ;  
 v o i d   r t _ s y s t e m _ s c h e d u l e r _ s t a r t ( v o i d ) ;  
  
 v o i d   r t _ s c h e d u l e ( v o i d ) ;  
 v o i d   r t _ s c h e d u l e _ i n s e r t _ t h r e a d ( s t r u c t   r t _ t h r e a d   * t h r e a d ) ;  
 v o i d   r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( s t r u c t   r t _ t h r e a d   * t h r e a d ) ;  
  
 v o i d   r t _ e n t e r _ c r i t i c a l ( v o i d ) ;  
 v o i d   r t _ e x i t _ c r i t i c a l ( v o i d ) ;  
 r t _ u i n t 1 6 _ t   r t _ c r i t i c a l _ l e v e l ( v o i d ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ s c h e d u l e r _ s e t h o o k ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   f r o m ,   r t _ t h r e a d _ t   t o ) ) ;  
 # e n d i f  
  
 / * * @ } * /  
  
 / * *  
   *   @ a d d t o g r o u p   M M  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   m e m o r y   m a n a g e m e n t   i n t e r f a c e  
   * /  
 # i f d e f   R T _ U S I N G _ M E M P O O L  
 / *  
   *   m e m o r y   p o o l   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ m p _ i n i t ( s t r u c t   r t _ m e m p o o l   * m p ,  
                                         c o n s t   c h a r                 * n a m e ,  
                                         v o i d                             * s t a r t ,  
                                         r t _ s i z e _ t                     s i z e ,  
                                         r t _ s i z e _ t                     b l o c k _ s i z e ) ;  
 r t _ e r r _ t   r t _ m p _ d e t a c h ( s t r u c t   r t _ m e m p o o l   * m p ) ;  
 r t _ m p _ t   r t _ m p _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                           r t _ s i z e _ t       b l o c k _ c o u n t ,  
                                           r t _ s i z e _ t       b l o c k _ s i z e ) ;  
 r t _ e r r _ t   r t _ m p _ d e l e t e ( r t _ m p _ t   m p ) ;  
  
 v o i d   * r t _ m p _ a l l o c ( r t _ m p _ t   m p ,   r t _ i n t 3 2 _ t   t i m e ) ;  
 v o i d   r t _ m p _ f r e e ( v o i d   * b l o c k ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ m p _ a l l o c _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) ) ;  
 v o i d   r t _ m p _ f r e e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) ) ;  
 # e n d i f  
  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / *  
   *   h e a p   m e m o r y   i n t e r f a c e  
   * /  
 v o i d   r t _ s y s t e m _ h e a p _ i n i t ( v o i d   * b e g i n _ a d d r ,   v o i d   * e n d _ a d d r ) ;  
  
 v o i d   * r t _ m a l l o c ( r t _ s i z e _ t   n b y t e s ) ;  
 v o i d   r t _ f r e e ( v o i d   * p t r ) ;  
 v o i d   * r t _ r e a l l o c ( v o i d   * p t r ,   r t _ s i z e _ t   n b y t e s ) ;  
 v o i d   * r t _ c a l l o c ( r t _ s i z e _ t   c o u n t ,   r t _ s i z e _ t   s i z e ) ;  
 v o i d   * r t _ m a l l o c _ a l i g n ( r t _ s i z e _ t   s i z e ,   r t _ s i z e _ t   a l i g n ) ;  
 v o i d   r t _ f r e e _ a l i g n ( v o i d   * p t r ) ;  
  
 v o i d   r t _ m e m o r y _ i n f o ( r t _ u i n t 3 2 _ t   * t o t a l ,  
                                         r t _ u i n t 3 2 _ t   * u s e d ,  
                                         r t _ u i n t 3 2 _ t   * m a x _ u s e d ) ;  
  
 # i f d e f   R T _ U S I N G _ S L A B  
 v o i d   * r t _ p a g e _ a l l o c ( r t _ s i z e _ t   n p a g e s ) ;  
 v o i d   r t _ p a g e _ f r e e ( v o i d   * a d d r ,   r t _ s i z e _ t   n p a g e s ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ m a l l o c _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d   * p t r ,   r t _ s i z e _ t   s i z e ) ) ;  
 v o i d   r t _ f r e e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d   * p t r ) ) ;  
 # e n d i f  
  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ M E M H E A P  
 / * *  
   *   m e m o r y   h e a p   o b j e c t   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ m e m h e a p _ i n i t ( s t r u c t   r t _ m e m h e a p   * m e m h e a p ,  
                                                   c o n s t   c h a r                 * n a m e ,  
                                                   v o i d                             * s t a r t _ a d d r ,  
                                                   r t _ s i z e _ t                   s i z e ) ;  
 r t _ e r r _ t   r t _ m e m h e a p _ d e t a c h ( s t r u c t   r t _ m e m h e a p   * h e a p ) ;  
 v o i d   * r t _ m e m h e a p _ a l l o c ( s t r u c t   r t _ m e m h e a p   * h e a p ,   r t _ s i z e _ t   s i z e ) ;  
 v o i d   * r t _ m e m h e a p _ r e a l l o c ( s t r u c t   r t _ m e m h e a p   * h e a p ,   v o i d   * p t r ,   r t _ s i z e _ t   n e w s i z e ) ;  
 v o i d   r t _ m e m h e a p _ f r e e ( v o i d   * p t r ) ;  
 # e n d i f  
  
 / * * @ } * /  
  
 / * *  
   *   @ a d d t o g r o u p   I P C  
   * /  
  
 / * * @ { * /  
  
 # i f d e f   R T _ U S I N G _ S E M A P H O R E  
 / *  
   *   s e m a p h o r e   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ s e m _ i n i t ( r t _ s e m _ t         s e m ,  
                                           c o n s t   c h a r   * n a m e ,  
                                           r t _ u i n t 3 2 _ t   v a l u e ,  
                                           r t _ u i n t 8 _ t     f l a g ) ;  
 r t _ e r r _ t   r t _ s e m _ d e t a c h ( r t _ s e m _ t   s e m ) ;  
 r t _ s e m _ t   r t _ s e m _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 3 2 _ t   v a l u e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ s e m _ d e l e t e ( r t _ s e m _ t   s e m ) ;  
  
 r t _ e r r _ t   r t _ s e m _ t a k e ( r t _ s e m _ t   s e m ,   r t _ i n t 3 2 _ t   t i m e ) ;  
 r t _ e r r _ t   r t _ s e m _ t r y t a k e ( r t _ s e m _ t   s e m ) ;  
 r t _ e r r _ t   r t _ s e m _ r e l e a s e ( r t _ s e m _ t   s e m ) ;  
 r t _ e r r _ t   r t _ s e m _ c o n t r o l ( r t _ s e m _ t   s e m ,   i n t   c m d ,   v o i d   * a r g ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ M U T E X  
 / *  
   *   m u t e x   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ i n i t ( r t _ m u t e x _ t   m u t e x ,   c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ m u t e x _ d e t a c h ( r t _ m u t e x _ t   m u t e x ) ;  
 r t _ m u t e x _ t   r t _ m u t e x _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ m u t e x _ d e l e t e ( r t _ m u t e x _ t   m u t e x ) ;  
  
 r t _ e r r _ t   r t _ m u t e x _ t a k e ( r t _ m u t e x _ t   m u t e x ,   r t _ i n t 3 2 _ t   t i m e ) ;  
 r t _ e r r _ t   r t _ m u t e x _ r e l e a s e ( r t _ m u t e x _ t   m u t e x ) ;  
 r t _ e r r _ t   r t _ m u t e x _ c o n t r o l ( r t _ m u t e x _ t   m u t e x ,   i n t   c m d ,   v o i d   * a r g ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ E V E N T  
 / *  
   *   e v e n t   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ i n i t ( r t _ e v e n t _ t   e v e n t ,   c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ e v e n t _ d e t a c h ( r t _ e v e n t _ t   e v e n t ) ;  
 r t _ e v e n t _ t   r t _ e v e n t _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ e v e n t _ d e l e t e ( r t _ e v e n t _ t   e v e n t ) ;  
  
 r t _ e r r _ t   r t _ e v e n t _ s e n d ( r t _ e v e n t _ t   e v e n t ,   r t _ u i n t 3 2 _ t   s e t ) ;  
 r t _ e r r _ t   r t _ e v e n t _ r e c v ( r t _ e v e n t _ t       e v e n t ,  
                                               r t _ u i n t 3 2 _ t     s e t ,  
                                               r t _ u i n t 8 _ t       o p t ,  
                                               r t _ i n t 3 2 _ t       t i m e o u t ,  
                                               r t _ u i n t 3 2 _ t   * r e c v e d ) ;  
 r t _ e r r _ t   r t _ e v e n t _ c o n t r o l ( r t _ e v e n t _ t   e v e n t ,   i n t   c m d ,   v o i d   * a r g ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ M A I L B O X  
 / *  
   *   m a i l b o x   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ m b _ i n i t ( r t _ m a i l b o x _ t   m b ,  
                                         c o n s t   c h a r     * n a m e ,  
                                         v o i d                 * m s g p o o l ,  
                                         r t _ s i z e _ t         s i z e ,  
                                         r t _ u i n t 8 _ t       f l a g ) ;  
 r t _ e r r _ t   r t _ m b _ d e t a c h ( r t _ m a i l b o x _ t   m b ) ;  
 r t _ m a i l b o x _ t   r t _ m b _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ s i z e _ t   s i z e ,   r t _ u i n t 8 _ t   f l a g ) ;  
 r t _ e r r _ t   r t _ m b _ d e l e t e ( r t _ m a i l b o x _ t   m b ) ;  
  
 r t _ e r r _ t   r t _ m b _ s e n d ( r t _ m a i l b o x _ t   m b ,   r t _ u b a s e _ t   v a l u e ) ;  
 r t _ e r r _ t   r t _ m b _ s e n d _ w a i t ( r t _ m a i l b o x _ t   m b ,  
                                                   r t _ u b a s e _ t     v a l u e ,  
                                                   r t _ i n t 3 2 _ t       t i m e o u t ) ;  
 r t _ e r r _ t   r t _ m b _ r e c v ( r t _ m a i l b o x _ t   m b ,   r t _ u b a s e _ t   * v a l u e ,   r t _ i n t 3 2 _ t   t i m e o u t ) ;  
 r t _ e r r _ t   r t _ m b _ c o n t r o l ( r t _ m a i l b o x _ t   m b ,   i n t   c m d ,   v o i d   * a r g ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ M E S S A G E Q U E U E  
 / *  
   *   m e s s a g e   q u e u e   i n t e r f a c e  
   * /  
 r t _ e r r _ t   r t _ m q _ i n i t ( r t _ m q _ t           m q ,  
                                         c o n s t   c h a r   * n a m e ,  
                                         v o i d               * m s g p o o l ,  
                                         r t _ s i z e _ t       m s g _ s i z e ,  
                                         r t _ s i z e _ t       p o o l _ s i z e ,  
                                         r t _ u i n t 8 _ t     f l a g ) ;  
 r t _ e r r _ t   r t _ m q _ d e t a c h ( r t _ m q _ t   m q ) ;  
 r t _ m q _ t   r t _ m q _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                           r t _ s i z e _ t       m s g _ s i z e ,  
                                           r t _ s i z e _ t       m a x _ m s g s ,  
                                           r t _ u i n t 8 _ t     f l a g ) ;  
 r t _ e r r _ t   r t _ m q _ d e l e t e ( r t _ m q _ t   m q ) ;  
  
 r t _ e r r _ t   r t _ m q _ s e n d ( r t _ m q _ t   m q ,   c o n s t   v o i d   * b u f f e r ,   r t _ s i z e _ t   s i z e ) ;  
 r t _ e r r _ t   r t _ m q _ s e n d _ w a i t ( r t _ m q _ t           m q ,  
                                                   c o n s t   v o i d   * b u f f e r ,  
                                                   r t _ s i z e _ t       s i z e ,  
                                                   r t _ i n t 3 2 _ t     t i m e o u t ) ;  
 r t _ e r r _ t   r t _ m q _ u r g e n t ( r t _ m q _ t   m q ,   c o n s t   v o i d   * b u f f e r ,   r t _ s i z e _ t   s i z e ) ;  
 r t _ e r r _ t   r t _ m q _ r e c v ( r t _ m q _ t         m q ,  
                                         v o i d             * b u f f e r ,  
                                         r t _ s i z e _ t     s i z e ,  
                                         r t _ i n t 3 2 _ t   t i m e o u t ) ;  
 r t _ e r r _ t   r t _ m q _ c o n t r o l ( r t _ m q _ t   m q ,   i n t   c m d ,   v o i d   * a r g ) ;  
 # e n d i f  
  
 / * * @ } * /  
  
 # i f d e f   R T _ U S I N G _ D E V I C E  
 / * *  
   *   @ a d d t o g r o u p   D e v i c e  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   d e v i c e   ( I / O )   s y s t e m   i n t e r f a c e  
   * /  
 r t _ d e v i c e _ t   r t _ d e v i c e _ f i n d ( c o n s t   c h a r   * n a m e ) ;  
  
 r t _ e r r _ t   r t _ d e v i c e _ r e g i s t e r ( r t _ d e v i c e _ t   d e v ,  
                                                         c o n s t   c h a r   * n a m e ,  
                                                         r t _ u i n t 1 6 _ t   f l a g s ) ;  
 r t _ e r r _ t   r t _ d e v i c e _ u n r e g i s t e r ( r t _ d e v i c e _ t   d e v ) ;  
  
 r t _ d e v i c e _ t   r t _ d e v i c e _ c r e a t e ( i n t   t y p e ,   i n t   a t t a c h _ s i z e ) ;  
 v o i d   r t _ d e v i c e _ d e s t r o y ( r t _ d e v i c e _ t   d e v i c e ) ;  
  
 r t _ e r r _ t   r t _ d e v i c e _ i n i t _ a l l ( v o i d ) ;  
  
 r t _ e r r _ t  
 r t _ d e v i c e _ s e t _ r x _ i n d i c a t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ e r r _ t   ( * r x _ i n d ) ( r t _ d e v i c e _ t   d e v ,   r t _ s i z e _ t   s i z e ) ) ;  
 r t _ e r r _ t  
 r t _ d e v i c e _ s e t _ t x _ c o m p l e t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ e r r _ t   ( * t x _ d o n e ) ( r t _ d e v i c e _ t   d e v ,   v o i d   * b u f f e r ) ) ;  
  
 r t _ e r r _ t     r t _ d e v i c e _ i n i t   ( r t _ d e v i c e _ t   d e v ) ;  
 r t _ e r r _ t     r t _ d e v i c e _ o p e n   ( r t _ d e v i c e _ t   d e v ,   r t _ u i n t 1 6 _ t   o f l a g ) ;  
 r t _ e r r _ t     r t _ d e v i c e _ c l o s e ( r t _ d e v i c e _ t   d e v ) ;  
 r t _ s i z e _ t   r t _ d e v i c e _ r e a d   ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ o f f _ t         p o s ,  
                                                     v o i d               * b u f f e r ,  
                                                     r t _ s i z e _ t       s i z e ) ;  
 r t _ s i z e _ t   r t _ d e v i c e _ w r i t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ o f f _ t         p o s ,  
                                                     c o n s t   v o i d   * b u f f e r ,  
                                                     r t _ s i z e _ t       s i z e ) ;  
 r t _ e r r _ t     r t _ d e v i c e _ c o n t r o l ( r t _ d e v i c e _ t   d e v ,   i n t   c m d ,   v o i d   * a r g ) ;  
  
 / * * @ } * /  
 # e n d i f  
  
 / *  
   *   i n t e r r u p t   s e r v i c e  
   * /  
  
 / *  
   *   r t _ i n t e r r u p t _ e n t e r   a n d   r t _ i n t e r r u p t _ l e a v e   o n l y   c a n   b e   c a l l e d   b y   B S P  
   * /  
 v o i d   r t _ i n t e r r u p t _ e n t e r ( v o i d ) ;  
 v o i d   r t _ i n t e r r u p t _ l e a v e ( v o i d ) ;  
  
 / *  
   *   t h e   n u m b e r   o f   n e s t e d   i n t e r r u p t s .  
   * /  
 r t _ u i n t 8 _ t   r t _ i n t e r r u p t _ g e t _ n e s t ( v o i d ) ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 v o i d   r t _ i n t e r r u p t _ e n t e r _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) ) ;  
 v o i d   r t _ i n t e r r u p t _ l e a v e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) ) ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ C O M P O N E N T S _ I N I T  
 v o i d   r t _ c o m p o n e n t s _ i n i t ( v o i d ) ;  
 v o i d   r t _ c o m p o n e n t s _ b o a r d _ i n i t ( v o i d ) ;  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   K e r n e l S e r v i c e  
   * /  
  
 / * * @ { * /  
  
 / *  
   *   g e n e r a l   k e r n e l   s e r v i c e  
   * /  
 # i f n d e f   R T _ U S I N G _ C O N S O L E  
 # d e f i n e   r t _ k p r i n t f ( . . . )  
 # d e f i n e   r t _ k p u t s ( s t r )  
 # e l s e  
 v o i d   r t _ k p r i n t f ( c o n s t   c h a r   * f m t ,   . . . ) ;  
 v o i d   r t _ k p u t s ( c o n s t   c h a r   * s t r ) ;  
 # e n d i f  
 r t _ i n t 3 2 _ t   r t _ v s p r i n t f ( c h a r   * d e s t ,   c o n s t   c h a r   * f o r m a t ,   v a _ l i s t   a r g _ p t r ) ;  
 r t _ i n t 3 2 _ t   r t _ v s n p r i n t f ( c h a r   * b u f ,   r t _ s i z e _ t   s i z e ,   c o n s t   c h a r   * f m t ,   v a _ l i s t   a r g s ) ;  
 r t _ i n t 3 2 _ t   r t _ s p r i n t f ( c h a r   * b u f ,   c o n s t   c h a r   * f o r m a t ,   . . . ) ;  
 r t _ i n t 3 2 _ t   r t _ s n p r i n t f ( c h a r   * b u f ,   r t _ s i z e _ t   s i z e ,   c o n s t   c h a r   * f o r m a t ,   . . . ) ;  
  
 # i f   d e f i n e d ( R T _ U S I N G _ D E V I C E )   & &   d e f i n e d ( R T _ U S I N G _ C O N S O L E )  
 r t _ d e v i c e _ t   r t _ c o n s o l e _ s e t _ d e v i c e ( c o n s t   c h a r   * n a m e ) ;  
 r t _ d e v i c e _ t   r t _ c o n s o l e _ g e t _ d e v i c e ( v o i d ) ;  
 # e n d i f  
  
 r t _ e r r _ t   r t _ g e t _ e r r n o ( v o i d ) ;  
 v o i d   r t _ s e t _ e r r n o ( r t _ e r r _ t   n o ) ;  
 i n t   * _ r t _ e r r n o ( v o i d ) ;  
 # i f   ! d e f i n e d ( R T _ U S I N G _ N E W L I B )   & &   ! d e f i n e d ( _ W I N 3 2 )  
 # i f n d e f   e r r n o  
 # d e f i n e   e r r n o         * _ r t _ e r r n o ( )  
 # e n d i f  
 # e n d i f  
  
 i n t   _ _ r t _ f f s ( i n t   v a l u e ) ;  
  
 v o i d   * r t _ m e m s e t ( v o i d   * s r c ,   i n t   c ,   r t _ u b a s e _ t   n ) ;  
 v o i d   * r t _ m e m c p y ( v o i d   * d e s t ,   c o n s t   v o i d   * s r c ,   r t _ u b a s e _ t   n ) ;  
  
 r t _ i n t 3 2 _ t   r t _ s t r n c m p ( c o n s t   c h a r   * c s ,   c o n s t   c h a r   * c t ,   r t _ u b a s e _ t   c o u n t ) ;  
 r t _ i n t 3 2 _ t   r t _ s t r c m p ( c o n s t   c h a r   * c s ,   c o n s t   c h a r   * c t ) ;  
 r t _ s i z e _ t   r t _ s t r l e n ( c o n s t   c h a r   * s r c ) ;  
 r t _ s i z e _ t   r t _ s t r n l e n ( c o n s t   c h a r   * s ,   r t _ u b a s e _ t   m a x l e n ) ;  
 c h a r   * r t _ s t r d u p ( c o n s t   c h a r   * s ) ;  
 # i f   d e f i n e d ( _ _ C C _ A R M )   | |   d e f i n e d ( _ _ C L A N G _ A R M )  
 / *   l e a k   s t r d u p   i n t e r f a c e   * /  
 c h a r *   s t r d u p ( c o n s t   c h a r *   s t r ) ;  
 # e n d i f  
  
 c h a r   * r t _ s t r s t r ( c o n s t   c h a r   * s t r 1 ,   c o n s t   c h a r   * s t r 2 ) ;  
 r t _ i n t 3 2 _ t   r t _ s s c a n f ( c o n s t   c h a r   * b u f ,   c o n s t   c h a r   * f m t ,   . . . ) ;  
 c h a r   * r t _ s t r n c p y ( c h a r   * d e s t ,   c o n s t   c h a r   * s r c ,   r t _ u b a s e _ t   n ) ;  
 v o i d   * r t _ m e m m o v e ( v o i d   * d e s t ,   c o n s t   v o i d   * s r c ,   r t _ u b a s e _ t   n ) ;  
 r t _ i n t 3 2 _ t   r t _ m e m c m p ( c o n s t   v o i d   * c s ,   c o n s t   v o i d   * c t ,   r t _ u b a s e _ t   c o u n t ) ;  
 r t _ i n t 3 2 _ t   r t _ s t r c a s e c m p ( c o n s t   c h a r   * a ,   c o n s t   c h a r   * b ) ;  
  
 v o i d   r t _ s h o w _ v e r s i o n ( v o i d ) ;  
  
 # i f d e f   R T _ D E B U G  
 e x t e r n   v o i d   ( * r t _ a s s e r t _ h o o k ) ( c o n s t   c h a r   * e x ,   c o n s t   c h a r   * f u n c ,   r t _ s i z e _ t   l i n e ) ;  
 v o i d   r t _ a s s e r t _ s e t _ h o o k ( v o i d   ( * h o o k ) ( c o n s t   c h a r   * e x ,   c o n s t   c h a r   * f u n c ,   r t _ s i z e _ t   l i n e ) ) ;  
  
 v o i d   r t _ a s s e r t _ h a n d l e r ( c o n s t   c h a r   * e x ,   c o n s t   c h a r   * f u n c ,   r t _ s i z e _ t   l i n e ) ;  
 # e n d i f   / *   R T _ D E B U G   * /  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
 # i n c l u d e   < f i n s h _ a p i . h >  
 # e n d i f  
  
 / * * @ } * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f  